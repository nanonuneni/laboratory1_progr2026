#pragma once
#include "Image.h"

class ImageFilter {
public:
    static void grayscale(Image& img);
    static void sepia(Image& img);
    static void invert(Image& img);
};