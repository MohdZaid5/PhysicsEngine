
#include <math.h>
#include "vectors.h"

Vector2 AddVectors(Vector2 _vec, Vector2 _to)
{
    return (Vector2) {
        .x = _vec.x + _to.x,
        .y = _vec.y + _to.y
    };
}

Vector2 SubtractVectors(Vector2 _vec, Vector2 _from)
{
    return (Vector2) { 
        .x = _vec.x - _from.x,
        .y = _vec.y - _from.y
    };
}

Vector2 ScaleVector(Vector2 _vec, float _by)
{
    return (Vector2) { 
        .x = _vec.x * _by,
        .y = _vec.y * _by
    };
}

Vector2 DivideVector(Vector2 _vec, float _by)
{
    return (Vector2) {
        .x = _vec.x / _by,
        .y = _vec.y / _by
    };
}

float DotProduct(Vector2 _vec, Vector2 _with)
{
    return (_vec.x*_with.x) + (_vec.y*_with.y);
}

float CrossProduct(Vector2 _vec, Vector2 _with)
{
    return (_vec.x*_with.y) - (_vec.y*_with.x);
}

float MagnitudeSquared(Vector2 _vec)
{
    return (_vec.x*_vec.x) + (_vec.y*_vec.y);
}

float Magnitude(Vector2 _vec)
{
    return sqrt(MagnitudeSquared(_vec));
}

Vector2 Normalize(Vector2 _vec)
{
    float magnitude = Magnitude(_vec);
    return (Vector2) { 
        .x = _vec.x/magnitude,
        .y = _vec.y/magnitude
    };
}

float Distance(Vector2 _vec, Vector2 _from)
{
    return Magnitude( SubtractVectors( _vec, _from ) );
}

float AngleBetween(Vector2 _vec1, Vector2 _vec2)
{
    Vector2 diffVector = SubtractVectors( _vec1, _vec2);
    return tanh(diffVector.y/diffVector.x);
}

Vector2 ProjectVector(Vector2 _vec, Vector2 _onto)
{
    float scaleFactor = DotProduct(_vec, _onto)/MagnitudeSquared(_onto);
    return ScaleVector(_onto, scaleFactor);
}

Vector2 RotateVector(Vector2 _vec, float _by)
{
    return (Vector2) { 
        .x = _vec.x * cos(_by) - _vec.y * sin(_by),
        .y = _vec.x * sin(_by) + _vec.y * cos(_by)
    };
}
