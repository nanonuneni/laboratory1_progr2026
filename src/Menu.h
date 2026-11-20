#pragma once
#include <string>
#include "Color.h"

struct LineParams {
    int x0, y0, x1, y1;
    Color color;
    int algorithm;
    int thickness;
};

class Menu {
public:
    static int show();
    static int readInt(const std::string& prompt);
    static float readFloat(const std::string& prompt);
    static Color readColor(const std::string& prompt);
    static LineParams readLineParams();
};