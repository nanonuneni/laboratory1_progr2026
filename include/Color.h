#pragma once
#include <cstdint>

struct Color {
    float r{0.0f}, g{0.0f}, b{0.0f}, a{1.0f};
    Color() = default;
    Color(float r, float g, float b, float a = 1.0f);
    static Color from_bytes(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255);
    uint8_t to_grayscale() const;
    Color lerp(const Color& target, float t) const;
    Color blend(const Color& src) const;
    Color operator+(const Color& o) const;
    Color operator-(const Color& o) const;
    Color operator*(float s) const;
    Color operator/(float s) const;
};
