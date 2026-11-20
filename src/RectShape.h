#pragma once
#include "IShape.h"
#include "Color.h"

class RectShape : public IShape {
    int cx, cy, w, h, thick;
    Color outline, fill;
    bool filled;
public:
    RectShape(int cx, int cy, int w, int h, int thick, Color outline, Color fill, bool filled);
    void draw(Canvas& canvas) const override;
};