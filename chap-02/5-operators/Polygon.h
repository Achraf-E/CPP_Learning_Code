#pragma once

#include <ostream>
#include <utility>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
public:
    friend std::ostream& operator<<(std::ostream& stream, Polygon polygon);
    void                 add_vertex(int a, int b);
    Vertex               operator[](int index);

private:
    std::vector<Vertex> _vertices;
};

// std::ostream& operator<<(std::ostream& stream, Polygon polygon);