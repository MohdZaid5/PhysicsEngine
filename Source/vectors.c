
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
