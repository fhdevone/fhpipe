/*

    Copyright (C) 2013 Modiot Labs 
    
    A very small application that looks for USB connected floathub devices
    and opens a network addressable connection to them on localhost (i.e.  a
    pipe between /dev/tty.usbserial and 127.0.0.1:5903)
    
*/

#include <QApplication>
#include "fhpipewindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FHPipeWindow pipeWin;
    pipeWin.show();
    return app.exec();
}
