#include <QtWidgets/QApplication>
#include"login.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login lo;
    lo.show();
    return a.exec();
}
