#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ventanasecundaria.h"
#include <deque> // Incluir deque para usarlo

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_buscarContenido_clicked();
    void on_pushButton_agregarFrente_clicked();
    void on_pushButton_agregarFinal_clicked();
    void on_pushButton_viewDeque_clicked();
    void on_pushButton_EliminarElemento_clicked();
    void on_pushButton_ordenarDeque_clicked();

private:
    Ui::Widget *ui;
    ventanaSecundaria *ventana2;
    std::deque<int> numerosDeque; // Deque para almacenar los números
};

#endif // WIDGET_H
