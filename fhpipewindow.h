/*

    Copyright (C) 2013 Modiot Labs 
    
    A very small application that looks for USB connected floathub devices
    and opens a network addressable connection to them on localhost (i.e.  a
    pipe between /dev/tty.usbserial and 127.0.0.1:5903)
    
*/

#ifndef FHPIPEWINDOW_H
#define FHPIPEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
class QPlainTextEdit;
QT_END_NAMESPACE

class FHPipeWindow : public QMainWindow
{
    Q_OBJECT

public:
    FHPipeWindow();

private:

    QPlainTextEdit *textEdit;


protected:
    void closeEvent(QCloseEvent *event);
};

#endif
