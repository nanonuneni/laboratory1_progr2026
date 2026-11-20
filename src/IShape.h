#pragma once
class Canvas;

class IShape {
public:
    virtual ~IShape() = default;
    virtual void draw(Canvas& canvas) const = 0;
};