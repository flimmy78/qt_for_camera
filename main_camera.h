#ifndef MAIN_CAMERA_H
#define MAIN_CAMERA_H

#include "camera.h"
#include "V4L2.h"
#include "decoder.h"
#include "decoder_mjpeg.h"
#include "videodev.h"


#include <errno.h>
#include <string.h>

    void main_camera(unsigned char *Frame_Buffer);
    void Frame2Frame_buffer4(unsigned char *Frame_Buffer_for_qt_display,const unsigned char *Frame_buffer, int height, int width);


#endif // MAIN_CAMERA_H
