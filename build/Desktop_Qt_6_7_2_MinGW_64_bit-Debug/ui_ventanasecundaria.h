/********************************************************************************
** Form generated from reading UI file 'ventanasecundaria.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANASECUNDARIA_H
#define UI_VENTANASECUNDARIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaSecundaria
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_buscarNumero;
    QPushButton *pushButton_buscarElemento;
    QLabel *label_ubicacion;
    QLabel *label_cantVeces;

    void setupUi(QWidget *ventanaSecundaria)
    {
        if (ventanaSecundaria->objectName().isEmpty())
            ventanaSecundaria->setObjectName("ventanaSecundaria");
        ventanaSecundaria->resize(400, 300);
        ventanaSecundaria->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(ventanaSecundaria);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 80, 301, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_buscarNumero = new QLineEdit(layoutWidget);
        lineEdit_buscarNumero->setObjectName("lineEdit_buscarNumero");
        QFont font;
        font.setBold(true);
        lineEdit_buscarNumero->setFont(font);

        verticalLayout->addWidget(lineEdit_buscarNumero);

        pushButton_buscarElemento = new QPushButton(layoutWidget);
        pushButton_buscarElemento->setObjectName("pushButton_buscarElemento");
        pushButton_buscarElemento->setFont(font);

        verticalLayout->addWidget(pushButton_buscarElemento);

        label_ubicacion = new QLabel(layoutWidget);
        label_ubicacion->setObjectName("label_ubicacion");
        label_ubicacion->setFont(font);
        label_ubicacion->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_ubicacion);

        label_cantVeces = new QLabel(layoutWidget);
        label_cantVeces->setObjectName("label_cantVeces");
        label_cantVeces->setFont(font);
        label_cantVeces->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_cantVeces);


        retranslateUi(ventanaSecundaria);

        QMetaObject::connectSlotsByName(ventanaSecundaria);
    } // setupUi

    void retranslateUi(QWidget *ventanaSecundaria)
    {
        ventanaSecundaria->setWindowTitle(QCoreApplication::translate("ventanaSecundaria", "Form", nullptr));
        lineEdit_buscarNumero->setText(QCoreApplication::translate("ventanaSecundaria", "Ingresa un numero..", nullptr));
        pushButton_buscarElemento->setText(QCoreApplication::translate("ventanaSecundaria", "Buscar Elemento", nullptr));
        label_ubicacion->setText(QCoreApplication::translate("ventanaSecundaria", "Ubicacion", nullptr));
        label_cantVeces->setText(QCoreApplication::translate("ventanaSecundaria", "Cantidad de veces que se repite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaSecundaria: public Ui_ventanaSecundaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANASECUNDARIA_H
