#pragma once
#include "IShape.h"
#include "Color.h"
#include <vector>

struct Point { int x{0}, y{0}; };

class Polygon : public IShape {
    std::vector<Point> pts;
    Color color;
    bool filled;
public:
    Polygon(std::vector<Point> pts, Color color, bool filled = true);
    void draw(Canvas& canvas) const override;
};