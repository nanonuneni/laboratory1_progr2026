#include "Color.h"
#include <algorithm>
#include <cmath>
#include <stdexcept>

Color::Color(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {}
Color Color::from_bytes(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    return Color(r/255.0f, g/255.0f, b/255.0f, a/255.0f);
}
uint8_t Color::to_grayscale() const {
    float y = 0.299f * r + 0.587f * g + 0.114f * b;
    return static_cast<uint8_t>(std::clamp(static_cast<int>(std::round(y * 255.0f)), 0, 255));
}
Color Color::lerp(const Color& t, float k) const {
    k = std::clamp(k, 0.0f, 1.0f);
    return Color(r*(1-k)+t.r*k, g*(1-k)+t.g*k, b*(1-k)+t.b*k, a*(1-k)+t.a*k);
}
Color Color::blend(const Color& s) const {
    float oa = s.a + a * (1.0f - s.a);
    if (oa <= 0.0f) return Color(0, 0, 0, 0);
    float inv = 1.0f / oa;
    return Color((s.r*s.a + r*a*(1.0f-s.a))*inv, (s.g*s.a + g*a*(1.0f-s.a))*inv, (s.b*s.a + b*a*(1.0f-s.a))*inv, oa);
}
Color Color::operator+(const Color& o) const { return Color(r+o.r, g+o.g, b+o.b, a+o.a); }
Color Color::operator-(const Color& o) const { return Color(r-o.r, g-o.g, b-o.b, a-o.a); }
Color Color::operator*(float s) const { return Color(r*s, g*s, b*s, a*s); }
Color Color::operator/(float s) const {
    if (s == 0.0f) throw std::invalid_argument("Division by zero");
    return Color(r/s, g/s, b/s, a/s);
}
