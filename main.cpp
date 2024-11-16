#include "widget.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Cargar el archivo CSS (asegúrate de que la ruta sea correcta)
    QFile file(":/source/estilos/estilos.css");
    if (file.open(QFile::ReadOnly)) {
        QString styleSheet = file.readAll();
        a.setStyleSheet(styleSheet);
    } else {
        qDebug() << "Error al cargar el archivo CSS!!!!!!!!!!!!";
    }

    Widget w;
    w.show();

    return a.exec();
}
