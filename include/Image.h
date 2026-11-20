#pragma once
#include "Color.h"
#include <vector>

class Image {
    std::vector<Color> px;
    int w{0}, h{0};
public:
    Image() = default;
    Image(int w, int h);
    int width() const { return w; }
    int height() const { return h; }
    Color get(int x, int y) const;
    void set(int x, int y, const Color& c);
    void clear(const Color& c);
    void resize(int w, int h);
    const Color* data() const { return px.data(); }
    Color* data() { return px.data(); }
};