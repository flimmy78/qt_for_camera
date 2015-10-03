#-------------------------------------------------
#
# Project created by QtCreator 2015-09-13T19:27:46
#
#-------------------------------------------------

QT       += core gui

TARGET = qtdesktop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    V4L2.c \
    decoder_mjpeg.c \
    camera.c \
    main_camera.c

HEADERS  += mainwindow.h \
    videodev.h \
    V4L2.h \
    jpeglib.h \
    jmorecfg.h \
    jerror.h \
    jconfig.h \
    huffman.h \
    decoder_mjpeg.h \
    decoder.h \
    camera.h \
    main_camera.h

FORMS    += mainwindow.ui


LIBS += libjpeg.a\
