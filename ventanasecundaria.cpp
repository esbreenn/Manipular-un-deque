#include "ventanasecundaria.h"
#include "ui_ventanasecundaria.h"
#include <QMessageBox>
#include <algorithm>
#include <QStringList>

ventanaSecundaria::ventanaSecundaria(const std::deque<int>& numeros, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ventanaSecundaria)
    , numerosDeque(numeros)
{
    ui->setupUi(this);
}

ventanaSecundaria::~ventanaSecundaria()
{
    delete ui;
}

void ventanaSecundaria::on_pushButton_buscarElemento_clicked()
{
    bool ok;
    int numero = ui->lineEdit_buscarNumero->text().toInt(&ok);

    if (ok) {
        // Usamos std::find para obtener el primer índice donde se encuentra el número
        auto it = std::find(numerosDeque.begin(), numerosDeque.end(), numero);

        // Usamos std::count para contar cuántas veces aparece el número
        int count = std::count(numerosDeque.begin(), numerosDeque.end(), numero);

        if (it != numerosDeque.end()) {
            int index = std::distance(numerosDeque.begin(), it);
            ui->label_ubicacion->setText("Posición: " + QString::number(index));
            ui->label_cantVeces->setText("Cantidad de veces: " + QString::number(count));
        } else {
            ui->label_ubicacion->setText("Posición: No encontrado");
            ui->label_cantVeces->setText("Cantidad de veces: 0");
        }
    } else {
        QMessageBox::warning(this, "Error", "Ingrese un número válido.");
    }
}
