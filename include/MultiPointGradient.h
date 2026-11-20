#pragma once
#include "Color.h"
#include <vector>

struct ColorStop {
    float position;
    Color color;
};

class MultiPointGradient {
public:
    static Color interpolate(const std::vector<ColorStop>& stops, float t);
};