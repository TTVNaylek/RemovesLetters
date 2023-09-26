#include "sansvoyelle.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Create Window object and create the window
    SansVoyelle w;
    w.show();

    return a.exec();
}
