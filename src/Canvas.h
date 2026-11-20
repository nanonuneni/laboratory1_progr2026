#pragma once
#include "Image.h"

class IShape;

class Canvas {
    Image& img;
public:
    explicit Canvas(Image& img);
    void setPixel(int x, int y, const Color& c);
    Color getPixel(int x, int y) const;
    void clear(const Color& c);
    int width() const { return img.width(); }
    int height() const { return img.height(); }
    void draw(const IShape& s);
};