#ifndef VENTANASECUNDARIA_H
#define VENTANASECUNDARIA_H
#include <deque> // Necesario para usar std::deque

#include <QWidget>

namespace Ui {
class ventanaSecundaria;
}

class ventanaSecundaria : public QWidget
{
    Q_OBJECT

public:
    explicit ventanaSecundaria(const std::deque<int>& numeros, QWidget *parent = nullptr);
    ~ventanaSecundaria();

private slots:
    void on_pushButton_buscarElemento_clicked();

private:
    Ui::ventanaSecundaria *ui;
    const std::deque<int>& numerosDeque; // Referencia constante al deque de la ventana principal
};

#endif // VENTANASECUNDARIA_H
