#ifndef VECTORS
#define VECTORS

#pragma region TypeDefinitions for Vector or Points

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

#pragma endregion

#pragma region Vector Operations

/**
 * @brief Adds two vectors component-wise.
 *
 * This function calculates the sum of two vectors by adding their corresponding components.
 *
 * @param _vec The first vector to be added.
 * @param _to The second vector to be added.
 * @return A new vector that is the result of adding _vec _to another.
 */
Vector2 AddVectors(Vector2 _vec, Vector2 _to);

/**
 * @brief Subtracts the second vector from the first vector component-wise.
 *
 * This function calculates the difference between two vectors by subtracting the components of the second vector from the corresponding components of the first vector.
 *
 * @param _vec The vector from which _from is subtracted.
 * @param _from The vector to be subtracted.
 * @return A new vector that is the result of subtracting _from another _vec.
 */
Vector2 SubtractVectors(Vector2 _vec, Vector2 _from);

/**
 * @brief Scales a vector by a scalar.
 *
 * This function multiplies each component of the vector by the given scalar value.
 *
 * @param _vec The vector to be scaled.
 * @param _by The scalar value to multiply the vector by.
 * @return A new vector that is the result of scaling _vec _by.
 */
Vector2 ScaleVector(Vector2 _vec, float _by);

/**
 * @brief Divides a vector by a scalar.
 *
 * This function divides each component of the vector by the given scalar value.
 *
 * @param _vec The vector to be divided.
 * @param _by The scalar value to divide the vector by.
 * @return A new vector that is the result of dividing _vec _by.
 */
Vector2 DivideVector(Vector2 _vec, float _by);

/**
 * @brief Computes the dot product of two vectors.
 *
 * The dot product is a scalar value that represents the projection of one vector onto another. It is calculated as the sum of the products of corresponding components of the vectors.
 *
 * @param _vec The first vector.
 * @param _with The second vector.
 * @return The dot product of _vec _with.
 */
float DotProduct(Vector2 _vec, Vector2 _with);

/**
 * @brief Computes the cross product of two vectors in 2D.
 *
 * In 2D, the cross product results in a scalar value that represents the magnitude of the perpendicular vector (out of the plane). It is calculated as the difference between the products of the components of the vectors.
 *
 * @param _vec The first vector.
 * @param _with The second vector.
 * @return The scalar cross product of _vec _with.
 */
float CrossProduct(Vector2 _vec, Vector2 _with);

/**
 * @brief Computes the magnitude (length) of a vector.
 *
 * The magnitude of a vector is the length of the vector from the origin to the point specified by the vector. It is calculated as the square root of the sum of the squares of its components.
 *
 * @param _vec The vector whose magnitude is to be computed.
 * @return The magnitude of _vec.
 */
float Magnitude(Vector2 _vec);

/**
 * @brief Computes the squared magnitude of a vector.
 *
 * The squared magnitude is the sum of the squares of the vector's components. It is useful for comparisons and optimizations where the actual magnitude is not required.
 *
 * @param _vec The vector whose squared magnitude is to be computed.
 * @return The squared magnitude of _vec.
 */
float MagnitudeSquared(Vector2 _vec);

/**
 * @brief Normalizes a vector.
 *
 * Normalization scales the vector so that it has a magnitude of 1, while preserving its direction. If the vector's magnitude is zero, it will return a zero vector to avoid division by zero.
 *
 * @param _vec The vector to be normalized.
 * @return A new vector that is the normalized version of _vec.
 */
Vector2 Normalize(Vector2 _vec);

/**
 * @brief Computes the distance between two vectors.
 *
 * This function calculates the distance as the magnitude of the vector difference between the two given vectors. It represents the Euclidean distance between the points specified by the vectors.
 *
 * @param _vec The first vector (point).
 * @param _from The second vector (point).
 * @return The distance between _vec and _from.
 */
float Distance(Vector2 _vec, Vector2 _from);

/**
 * @brief Computes the angle between two vectors.
 *
 * The angle between two vectors is calculated as the angle in radians between them. This function computes the angle using the arctangent of the ratio of the vectors' components.
 *
 * @param _vec1 The first vector.
 * @param _vec2 The second vector.
 * @return The angle between _vec1 and _vec2 in radians.
 */
float AngleBetween(Vector2 _vec1, Vector2 _vec2);

/**
 * @brief Projects one vector onto another.
 *
 * Vector projection is the operation of projecting one vector onto another vector. This results in a vector that represents the component of the first vector in the direction of the second vector.
 *
 * @param _vec The vector to be projected.
 * @param _onto The vector onto which _vec is projected.
 * @return The projection of _vec onto _onto.
 */
Vector2 ProjectVector(Vector2 _vec, Vector2 _onto);

/**
 * @brief Rotates a vector by a given angle.
 *
 * This function rotates the vector by the specified angle in radians. The rotation is performed counterclockwise around the origin.
 *
 * @param _vec The vector to be rotated.
 * @param _by The angle of rotation in radians.
 * @return A new vector that is the result of rotating _vec _by radians.
 */
Vector2 RotateVector(Vector2 _vec, float _by);

#pragma endregion

#endif