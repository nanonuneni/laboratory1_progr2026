#pragma once
#include "IShape.h"
#include "Color.h"

class NestedSquares : public IShape {
    int cx, cy, S, N, d;
    Color c0, c1;
public:
    NestedSquares(int cx, int cy, int S, int N, int d, Color c0, Color c1);
    void draw(Canvas& canvas) const override;
};