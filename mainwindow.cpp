#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QPixmap>
#include <QImage>
#include <QPainter>
#include <malloc.h>
extern "C"
{
#include "main_camera.h"
}
#define HEIGHT 240
#define WIDTH 320

unsigned char *Frame_Buffer = (unsigned char *) malloc(sizeof(unsigned char) * HEIGHT * WIDTH * 3);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap image;
    QByteArray aa;

    unsigned char *Frame_Buffer_for_qt_display = (unsigned char *) malloc(sizeof(unsigned char) * WIDTH * HEIGHT * 4);

    /*
    char heard[54] = {0x42,0x4d,0x38,0x84,0x03,0,0,0,0,0,0x36,0,0,0,0x28,0,\
                    0,0,0x40,0x01,0,0,0xf0,0,0,0,0x01,0,0x18,0,0,0,\
                    0,0,0x2,0x84,0x03,0,0x12,0x0b,0,0,0x12,0x0b,0,0,0,0,\
                    0,0,0,0,0,0};
    */

    main_camera(Frame_Buffer);
    Frame2Frame_buffer4(Frame_Buffer_for_qt_display, Frame_Buffer, HEIGHT, WIDTH);
    aa.append((char *)Frame_Buffer_for_qt_display,HEIGHT*WIDTH*4);
    image.loadFromData(aa);
    ui->label->setPixmap(image);

}

MainWindow::~MainWindow()
{
    delete ui;
}

