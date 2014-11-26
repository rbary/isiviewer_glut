//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Author  : Christophe [Groove] Riccio (contact [at] g-truc [point] net)
// Created : 2006-01-07
// Updated : 2006-01-07
// Licence : This source is under GNU LGPL licence
// File    : gtx_array_range.h
//////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM version 1.0
//////////////////////////////////////////////////////////////////////////////////

#ifndef __gtx_array_range_h__
#define __gtx_array_range_h__

//#define GLM_GTX_array_range 1
#include "../glm.h"

namespace glm
{
/*
    void addGTX(int size, const float* input_array1, float input2, float* output_array);
    void addGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void addGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void addGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void addGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void addGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void addGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void addGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void subGTX(int size, const float* input_array1, float input2, float* output_array);
    void subGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void subGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void subGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void subGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void subGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void subGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void subGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void mulGTX(int size, const float* input_array1, float input2, float* output_array);
    void mulGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void mulGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void mulGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void mulGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void mulGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void mulGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void mulGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void divGTX(int size, const float* input_array1, float input2, float* output_array);
    void divGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void divGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void divGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void divGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void divGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void divGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void divGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void mulAddGTX(int size, const float* input_array1, float input2, float* output_array);
    void mulAddGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void mulAddGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void mulAddGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void mulAddGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void mulAddGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void mulAddGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void mulAddGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void mulSubGTX(int size, const float* input_array1, float input2, float* output_array);
    void mulSubGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void mulSubGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void mulSubGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void mulSubGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void mulSubGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void mulSubGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void mulSubGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void dotGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void dotGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void dotGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void dotGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void normalizeGTX(int size, const float* input_array, float* output_array);
    void normalizeGTX(int size, const vec2* input_array, vec2* output_array);
    void normalizeGTX(int size, const vec3* input_array, vec3* output_array);
    void normalizeGTX(int size, const vec4* input_array, vec4* output_array);

    void minGTX(int size, const float* input_array1, float input2, float* output_array);
    void minGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void minGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void minGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void minGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void minGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void minGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void minGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void maxGTX(int size, const float* input_array1, float input2, float* output_array);
    void maxGTX(int size, const vec2* input_array1, const vec2& input2, vec2* output_array);
    void maxGTX(int size, const vec3* input_array1, const vec3& input2, vec3* output_array);
    void maxGTX(int size, const vec4* input_array1, const vec4& input2, vec4* output_array);

    void maxGTX(int size, const float* input_array1, const float* input_array2, float* output_array);
    void maxGTX(int size, const vec2* input_array1, const vec2* input_array2, vec2* output_array);
    void maxGTX(int size, const vec3* input_array1, const vec3* input_array2, vec3* output_array);
    void maxGTX(int size, const vec4* input_array1, const vec4* input_array2, vec4* output_array);

    void clampGTX(int size, const float* input_array1, float input2, float input3, float* output_array);
    void clampGTX(int size, const vec2* input_array1, const vec2& input2, const vec2& input3, vec2* output_array);
    void clampGTX(int size, const vec3* input_array1, const vec3& input2, const vec3& input3, vec3* output_array);
    void clampGTX(int size, const vec4* input_array1, const vec4& input2, const vec4& input3, vec4* output_array);

    void clampGTX(int size, const float* input_array1, const float* input2, const float* input3, float* output_array);
    void clampGTX(int size, const vec2* input_array1, const vec2* input2, const vec2* input3, vec2* output_array);
    void clampGTX(int size, const vec3* input_array1, const vec3* input2, const vec3* input3, vec3* output_array);
    void clampGTX(int size, const vec4* input_array1, const vec4* input2, const vec4* input3, vec4* output_array);
*/
}

#endif//__gtx_array_range_h__
