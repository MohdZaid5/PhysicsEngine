#ifndef VECTORS
#define VECTORS

#ifndef RAYLIB_H

    /**
     * @brief Represents a 2D vector or point.
     *
     * The `Vector2` structure is used to store the x and y coordinates of a vector or point in 2D space.
     * This structure is commonly used in various mathematical and graphical computations such as
     * vector operations, geometric transformations, and graphical representations.
     */
    typedef struct Vector2 {
        float x; // The x-coordinate of the vector or point.
        float y; // The y-coordinate of the vector or point.
    } Vector2;

#endif

/**
* @brief Alias for `Vector2` representing a point in 2D space.
*
* `Point` is a typedef for `Vector2` and is used interchangeably to represent a point in 2D space.
*/
typedef Vector2 Point;

#endif