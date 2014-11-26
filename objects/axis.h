/**
 * @file   axis.h
 * @author Roland Bary
 * @date   Nov 2014
 * @brief  Defines 3D Axis Object
 */
#ifndef AXIS_H
#define AXIS_H
#include <vector>
#include <glm/glm.h>

/**
 * Simple axis object
 * @brief The axis_object class
 */

class Axis
{
protected:
        std::vector<glm::vec3> _vertices;           //**vector of 3d positions */
        std::vector<std::vector<int> > _triangles;  //**vector of vertex indices */
        std::vector<glm::vec3> _normalsT;           //**vector of 3D vectors */
public:
    Axis();
    //~Axis_object(){};
    void draw();
};

#endif // AXIS_H
