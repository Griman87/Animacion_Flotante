#include "stdafx.h"
#include "animacion.h"
#include "QPropertyAnimation.h"
#include <stdlib.h>
#include <time.h>

animacion::animacion(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

animacion::~animacion()
{

}

QTimer* timer_borrar_guardar;

void animacion::on_Boton_fijo_clicked()
{
	timer_borrar_guardar = new QTimer(this);
	timer_borrar_guardar->setInterval(200);	//Se establece un temporizador de 2 segundos
	timer_borrar_guardar->setSingleShot(false);	//Se indica que es un disparo
	timer_borrar_guardar->connect(timer_borrar_guardar, SIGNAL(timeout()), this, SLOT(Borrar_texto_guardado()));	//Se hace el connect para indicar la funcion a ejecutarse cuando pase el tiempo
	timer_borrar_guardar->start();


}

QPushButton *Botones[100];
QPropertyAnimation * Animaciones[100];

void animacion::Borrar_texto_guardado()
{
	int pos_inicial;
	int pos_final;
	static int posicion = 0;
	QPushButton *button = new QPushButton(this);
	
	//srand (time(NULL));

	pos_inicial =50+rand() % 200 + 1;
	pos_final = 50+rand() % 200 + 1;

	button->setVisible(true);
	button->setStyleSheet("QPushButton {color: white;border: 2px solid #555;border-radius: 11px;padding: 5px;background: qradialgradient(cx: 0.4, cy: -0.3,fx: 0.4, fy:-0.3,radius: 1.3, stop: 0 rgba(203,168,226, 255), stop: 1 rgba(203, 168,226,100));min-width: 0px;}QPushButton:pressed{background: qradialgradient(cx: 0.4, cy: -0.3,fx: 0.4, fy: -0.3,radius: 1.35, stop: 0 rgba(203, 168,226,100), stop: 1 rgba(203, 168,226, 255));}");	
	button->resize(10,10);
	QPropertyAnimation *animation = new QPropertyAnimation(button, "geometry");
	animation->setDuration(2000);
	animation->setStartValue(QRect(pos_inicial, 50, 10, 10));
	animation->setEndValue(QRect(pos_final, 400, 10, 10));
	animation->setLoopCount(1);
	
	animation->connect(animation,SIGNAL(timerEvent()),this,SLOT(Fin_Tiempo()));

	animation->start();

	Animaciones[posicion] = animation;
	Botones[posicion++] = button;
	if(posicion >= 100);
		posicion = 0;
}

void animacion::mouseMoveEvent(QMouseEvent* event)
{
	int i;
	int posicion;

	ui.Boton_movil->move(event->x(),event->y());
	
	for (i = 0;i<100;i++)
	{
		if (Botones[i] != NULL)
		{
			posicion = Botones[i]->y();
			if (posicion >= 300)
			{
				Animaciones[i]->killTimer(0);
				Animaciones[i]->~QPropertyAnimation();
				Botones[i]->~QPushButton();
				Botones[i] = NULL;
			}
		}
	}
}

void animacion::Fin_Tiempo()
{
	static int i = 0;
	Animaciones[i]->killTimer(0);
	Animaciones[i]->~QPropertyAnimation();
	Botones[i]->~QPushButton();
	Botones[i++] = NULL;
}
