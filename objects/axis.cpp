#include "axis.h"

#include <iostream>
#include <algorithm>
#include <iterator>
#include <GL/gl.h> //OpenGL include file

Axis::Axis()
{
    //vertex coordinates

    //triangles vertices
    //normals components

    // Fill vertices, triangles and normalsT vectors
    // Fill vertex vector
    // Fill triangle vector

     bool debug = false;

     if (debug) {

       using namespace std;  // so that writing "std::" is no more necessary

       cout << "Display Axis information" << endl;

       // display components of the first vertex
       cout << endl << "First vertex :" << endl;
       glm::vec3 & vert = _vertices[0];
       cout << vert.x <<"\t"<< vert.y <<"\t"<< vert.z << endl;

       // display components of the firt normal
       cout << endl << "First normal :" << endl;
       glm::vec3 & norm = _normalsT[0];
       cout << norm.x <<"\t"<< norm.y <<"\t"<< norm.z << endl;

       // display indices of the first triangle
       cout << endl << "First triangle :" << endl;
       copy(_triangles[0].begin(), _triangles[0].end(),
        ostream_iterator<int>(cout, "\t"));
       cout << endl;
       // Ref STL: std::copy ->
       // http://www.sgi.com/tech/stl/copy.html

       // Ref STL: std::ostream_iterator<T> ->
       // http://www.sgi.com/tech/stl/ostream_iterator.html

       cout << endl;
     }

}

void Axis::draw(){

}
