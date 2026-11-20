#pragma once
#include "Color.h"
#include "Canvas.h"

class FloodFill {
public:
    static void fill(Canvas& canvas, int x, int y, const Color& fill_color, float tolerance);
};