#include "Polygon.h"

void Polygon::add_vertex(int a, int b)
{
    _vertices.emplace_back(a, b);
}

Vertex Polygon::operator[](int index)
{
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& stream, Polygon polygon)
{
    for (auto vertex : polygon._vertices)
    {
        stream << '(' << vertex.first << ',' << vertex.second << ") ";
    }
    return stream;
}