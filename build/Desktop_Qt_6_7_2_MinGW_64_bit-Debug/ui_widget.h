/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_viewDeque;
    QPushButton *pushButton_agregarFinal;
    QPushButton *pushButton_agregarFrente;
    QLabel *label_mostrar;
    QPushButton *pushButton_EliminarElemento;
    QPushButton *pushButton_buscarContenido;
    QLineEdit *lineEdit;
    QPushButton *pushButton_ordenarDeque;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 90, 581, 301));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_viewDeque = new QPushButton(layoutWidget);
        pushButton_viewDeque->setObjectName("pushButton_viewDeque");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setPointSize(12);
        font.setBold(false);
        pushButton_viewDeque->setFont(font);

        gridLayout->addWidget(pushButton_viewDeque, 4, 2, 1, 1);

        pushButton_agregarFinal = new QPushButton(layoutWidget);
        pushButton_agregarFinal->setObjectName("pushButton_agregarFinal");
        pushButton_agregarFinal->setFont(font);

        gridLayout->addWidget(pushButton_agregarFinal, 3, 1, 2, 1);

        pushButton_agregarFrente = new QPushButton(layoutWidget);
        pushButton_agregarFrente->setObjectName("pushButton_agregarFrente");
        pushButton_agregarFrente->setFont(font);

        gridLayout->addWidget(pushButton_agregarFrente, 3, 0, 2, 1);

        label_mostrar = new QLabel(layoutWidget);
        label_mostrar->setObjectName("label_mostrar");

        gridLayout->addWidget(label_mostrar, 6, 0, 1, 3);

        pushButton_EliminarElemento = new QPushButton(layoutWidget);
        pushButton_EliminarElemento->setObjectName("pushButton_EliminarElemento");
        pushButton_EliminarElemento->setFont(font);

        gridLayout->addWidget(pushButton_EliminarElemento, 3, 2, 1, 1);

        pushButton_buscarContenido = new QPushButton(layoutWidget);
        pushButton_buscarContenido->setObjectName("pushButton_buscarContenido");
        pushButton_buscarContenido->setFont(font);

        gridLayout->addWidget(pushButton_buscarContenido, 0, 2, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 2);

        pushButton_ordenarDeque = new QPushButton(layoutWidget);
        pushButton_ordenarDeque->setObjectName("pushButton_ordenarDeque");
        pushButton_ordenarDeque->setFont(font);

        gridLayout->addWidget(pushButton_ordenarDeque, 5, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_viewDeque->setText(QCoreApplication::translate("Widget", "Mostrar deque", nullptr));
        pushButton_agregarFinal->setText(QCoreApplication::translate("Widget", "Agregar al final", nullptr));
        pushButton_agregarFrente->setText(QCoreApplication::translate("Widget", "Agregar al  frente", nullptr));
        label_mostrar->setText(QCoreApplication::translate("Widget", "Cargando los datos..", nullptr));
        pushButton_EliminarElemento->setText(QCoreApplication::translate("Widget", "Eliminar elemento", nullptr));
        pushButton_buscarContenido->setText(QCoreApplication::translate("Widget", "Buscar contenido", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", " Ingresa un numero..", nullptr));
        pushButton_ordenarDeque->setText(QCoreApplication::translate("Widget", "Ordenar Deque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
