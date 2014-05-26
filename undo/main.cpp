/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).

****************************************************************************/


#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    Q_INIT_RESOURCE(undo);

    QApplication app(argc, argv);

    MainWindow win;
    win.resize(800, 600);
    win.show();

    return app.exec();
};
