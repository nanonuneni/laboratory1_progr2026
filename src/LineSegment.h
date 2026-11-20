#pragma once
#include "IShape.h"
#include "Color.h"

class LineSegment : public IShape {
    int x0, y0, x1, y1, thick;
    Color color;
    bool use_wu;
public:
    LineSegment(int x0, int y0, int x1, int y1, Color color, int thick = 1, bool wu = true);
    void draw(Canvas& canvas) const override;
private:
    void drawWu(Canvas& canvas) const;
    void drawThickBresenham(Canvas& canvas) const;
};