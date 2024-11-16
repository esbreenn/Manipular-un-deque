#include "widget.h"
#include "ui_widget.h"
#include <algorithm>
//#include <numeric>
#include <QStringList>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , ventana2(nullptr) // Inicializamos el puntero a la ventana secundaria como nulo
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui; // Libera la memoria utilizada por la interfaz de usuario
}

void Widget::on_pushButton_buscarContenido_clicked()
{
    // Si la ventana secundaria aún no existe, se crea
    if (!ventana2) {
        ventana2 = new ventanaSecundaria(numerosDeque); //pasamos el deque a la ventana sec
        //conectamos la se;al de la instruccion a la ventana secundaria con un slot para liberar la memoria
        connect(ventana2, &ventanaSecundaria::destroyed, this, [this]() {
            ventana2 = nullptr;
        });
    }
    ventana2->show();
}

void Widget::on_pushButton_agregarFrente_clicked()
{
    bool ok;
    int numero = ui->lineEdit->text().toInt(&ok); //obtenemos el numero

    //verificacion
    if (ok && numero > 0) {
        numerosDeque.push_front(numero);
        ui->lineEdit->clear(); //limpiamos el line edit
    } else {
        QMessageBox::warning(this, "Error", "Ingrese un número positivo válido.");
        ui->lineEdit->clear();
    }
}

void Widget::on_pushButton_agregarFinal_clicked()
{
    bool ok;
    int numero = ui->lineEdit->text().toInt(&ok);

    if (ok && numero > 0) {

        numerosDeque.push_back(numero);
        ui->lineEdit->clear();
    } else {
        QMessageBox::warning(this, "Error", "Ingrese un número positivo válido.");
        ui->lineEdit->clear();
    }
}

void Widget::on_pushButton_EliminarElemento_clicked()
{
    bool ok;
    int numero = ui->lineEdit->text().toInt(&ok);

    if (ok) {
        // Usamos std::find para encontrar la primera aparición del número
        auto it = std::find(numerosDeque.begin(), numerosDeque.end(), numero);
        if (it != numerosDeque.end()) {
            numerosDeque.erase(it); // Elimina el primero que coincide
            ui->label_mostrar->setText("Primer elemento eliminado.");
        } else {
            QMessageBox::information(this, "No encontrado", "El elemento no se encontró en el deque.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Ingrese un número válido.");
    }
    ui->lineEdit->clear();
}


// Slot que se ejecuta cuando se hace clic en el botón de visualizar el deque
void Widget::on_pushButton_viewDeque_clicked()
{
    QStringList elementos;
    // Convertimos los elementos del deque a una lista de cadenas y la mostramos
    std::for_each(numerosDeque.begin(), numerosDeque.end(),
                  [&](int numero) {
                      elementos << QString::number(numero);
                  });
    ui->label_mostrar->setText("Deque: " + elementos.join(", "));
}

// Slot que se ejecuta cuando se hace clic en el botón de ordenar el deque
void Widget::on_pushButton_ordenarDeque_clicked()
{
    std::sort(numerosDeque.begin(), numerosDeque.end());
    on_pushButton_viewDeque_clicked(); // Llama al método para actualizar la vista
    ui->label_mostrar->setText("Deque ordenado, selecciona mostrar deque nuevamente.");
}

