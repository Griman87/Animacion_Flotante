#ifndef ANIMACION_H
#define ANIMACION_H

#include <QtGui/QMainWindow>
#include "ui_animacion.h"

class animacion : public QMainWindow
{
	Q_OBJECT

public:
	animacion(QWidget *parent = 0, Qt::WFlags flags = 0);
	~animacion();

private:
	Ui::animacionClass ui;

	public slots:
		void on_Boton_fijo_clicked();
		void Borrar_texto_guardado();
		void Fin_Tiempo();

	protected:
		virtual void mouseMoveEvent(QMouseEvent* event);
};

#endif // ANIMACION_H
