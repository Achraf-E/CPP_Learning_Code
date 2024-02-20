#pragma once

class Rectangle
{
public:
    Rectangle(float length, float width);

    Rectangle(float size);

    Rectangle();

    float get_length() const;
    float get_width() const;

    void scale(float ratio);

    static void set_default_size(float size);

    // Rectangle(float length, float width)
    //     : _length { length }
    //     , _width { width }
    //{}

    // float get_length() const { return _length; }
    // float get_width() const { return _width; }

    // void scale(float ratio)
    // {
    //    _length *= ratio;
    //    _width *= ratio;
    //}

private:
    float               _length;
    float               _width;
    static inline float _default_size;
};
