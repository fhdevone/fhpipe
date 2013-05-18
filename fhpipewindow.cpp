/*

    Copyright (C) 2013 Modiot Labs 
    
    A very small application that looks for USB connected floathub devices
    and opens a network addressable connection to them on localhost (i.e.  a
    pipe between /dev/tty.usbserial and 127.0.0.1:5903)
    
*/


#include <QtWidgets>
#include <iostream>
#include "fhpipewindow.h"

using namespace std;

FHPipeWindow::FHPipeWindow()
{
    textEdit = new QPlainTextEdit;
    setCentralWidget(textEdit);
    cout << " A floathub pipe window object exists" << endl;
}

void FHPipeWindow::closeEvent(QCloseEvent */*event*/)
{
/*
    if (maybeSave()) {
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
*/
}
