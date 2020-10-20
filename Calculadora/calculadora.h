#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QDialog>
#include "ui_calculadora.h"

class Calculadora : public Ui::Calculadora, public QDialog{
public:
	Calculadora(QWidget *parent = 0);
}

#endif
