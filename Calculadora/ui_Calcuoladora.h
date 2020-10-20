/********************************************************************************
** Form generated from reading UI file 'Calcuoladora.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCUOLADORA_H
#define UI_CALCUOLADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(400, 300);
        pushButton = new QPushButton(Calculadora);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 110, 89, 25));
        pushButton_2 = new QPushButton(Calculadora);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 110, 89, 25));
        label = new QLabel(Calculadora);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 67, 17));

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Calculadora", "2", nullptr));
        pushButton_2->setText(QApplication::translate("Calculadora", "1", nullptr));
        label->setText(QApplication::translate("Calculadora", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCUOLADORA_H
