//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Author  : Christophe [Groove] Riccio (contact [at] g-truc [point] net)
// Created : 2006-01-04
// Updated : 2006-01-04
// Licence : This source is under GNU LGPL licence
// File    : gtx_inverse_transpose.inl
//////////////////////////////////////////////////////////////////////////////////

#ifndef __gtx_inverse_transpose_inl__
#define __gtx_inverse_transpose_inl__

#include "gtx_inverse_transpose.h"

namespace glm
{
    template <typename T> 
    inline _xmat2<T> inverseTransposeGTX(const _xmat2<T>& m)
    {
        T Determinant = m[0][0] * m[1][1] - m[1][0] * m[0][1];

        _xmat2<T> Inverse(
            + m[1][1] / Determinant,
            - m[0][1] / Determinant,
            - m[1][0] / Determinant, 
            + m[0][0] / Determinant);

        return Inverse;
    }

    template <typename T> 
    inline _xmat3<T> inverseTransposeGTX(const _xmat3<T>& m)
    {
        T Determinant = m[0][0] * (m[1][1] * m[2][2] - m[2][1] * m[1][2])
                      - m[1][0] * (m[0][1] * m[2][2] - m[2][1] * m[0][2])
                      + m[2][0] * (m[0][1] * m[1][2] - m[1][1] * m[0][2]);

        _xmat3<T> Inverse;
        Inverse[0][0] = + (m[1][1] * m[2][2] - m[2][1] * m[1][2]);
        Inverse[0][1] = - (m[1][0] * m[2][2] - m[2][0] * m[1][2]);
        Inverse[0][2] = + (m[1][0] * m[2][1] - m[2][0] * m[1][1]);
        Inverse[1][0] = - (m[0][1] * m[2][2] - m[2][1] * m[0][2]);
        Inverse[1][1] = + (m[0][0] * m[2][2] - m[2][0] * m[0][2]);
        Inverse[1][2] = - (m[0][0] * m[2][1] - m[2][0] * m[0][1]);
        Inverse[2][0] = + (m[0][1] * m[1][2] - m[1][1] * m[0][2]);
        Inverse[2][1] = - (m[0][0] * m[1][2] - m[1][0] * m[0][2]);
        Inverse[2][2] = + (m[0][0] * m[1][1] - m[1][0] * m[0][1]);
        Inverse /= Determinant;

        return Inverse;
    }

    template <typename T> 
    inline _xmat4<T> inverseTransposeGTX(const _xmat4<T>& m)
    {
        T SubFactor00 = m[2][2] * m[3][3] - m[3][2] * m[2][3];
        T SubFactor01 = m[2][1] * m[3][3] - m[3][1] * m[2][3];
        T SubFactor02 = m[2][1] * m[3][2] - m[3][1] * m[2][2];
        T SubFactor03 = m[2][0] * m[3][3] - m[3][0] * m[2][3];
        T SubFactor04 = m[2][0] * m[3][2] - m[3][0] * m[2][2];
        T SubFactor05 = m[2][0] * m[3][1] - m[3][0] * m[2][1];
        T SubFactor06 = m[1][2] * m[3][3] - m[3][2] * m[1][3];
        T SubFactor07 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
        T SubFactor08 = m[1][1] * m[3][2] - m[3][1] * m[1][2];
        T SubFactor09 = m[1][0] * m[3][3] - m[3][0] * m[1][3];
        T SubFactor10 = m[1][0] * m[3][2] - m[3][0] * m[1][2];
        T SubFactor11 = m[1][1] * m[3][3] - m[3][1] * m[1][3];
        T SubFactor12 = m[1][0] * m[3][1] - m[3][0] * m[1][1];
        T SubFactor13 = m[1][2] * m[2][3] - m[2][2] * m[1][3];
        T SubFactor14 = m[1][1] * m[2][3] - m[2][1] * m[1][3];
        T SubFactor15 = m[1][1] * m[2][2] - m[2][1] * m[1][2];
        T SubFactor16 = m[1][0] * m[2][3] - m[2][0] * m[1][3];
        T SubFactor17 = m[1][0] * m[2][2] - m[2][0] * m[1][2];
        T SubFactor18 = m[1][0] * m[2][1] - m[2][0] * m[1][1];

        _xmat4<T> Inverse;
        Inverse[0][0] = + (m[1][1] * SubFactor00 - m[1][2] * SubFactor01 + m[1][3] * SubFactor02);
        Inverse[0][1] = - (m[1][0] * SubFactor00 - m[1][2] * SubFactor03 + m[1][3] * SubFactor04);
        Inverse[0][2] = + (m[1][0] * SubFactor01 - m[1][1] * SubFactor03 + m[1][3] * SubFactor05);
        Inverse[0][3] = - (m[1][0] * SubFactor02 - m[1][1] * SubFactor04 + m[1][2] * SubFactor05);

        Inverse[1][0] = - (m[0][1] * SubFactor00 - m[0][2] * SubFactor01 + m[0][3] * SubFactor02);
        Inverse[1][1] = + (m[0][0] * SubFactor00 - m[0][2] * SubFactor03 + m[0][3] * SubFactor04);
        Inverse[1][2] = - (m[0][0] * SubFactor01 - m[0][1] * SubFactor03 + m[0][3] * SubFactor05);
        Inverse[1][3] = + (m[0][0] * SubFactor02 - m[0][1] * SubFactor04 + m[0][2] * SubFactor05);

        Inverse[2][0] = + (m[0][1] * SubFactor06 - m[0][2] * SubFactor07 + m[0][3] * SubFactor08);
        Inverse[2][1] = - (m[0][0] * SubFactor06 - m[0][2] * SubFactor09 + m[0][3] * SubFactor10);
        Inverse[2][2] = + (m[0][0] * SubFactor11 - m[0][1] * SubFactor09 + m[0][3] * SubFactor12);
        Inverse[2][3] = - (m[0][0] * SubFactor08 - m[0][1] * SubFactor10 + m[0][2] * SubFactor12);

        Inverse[3][0] = - (m[0][1] * SubFactor13 - m[0][2] * SubFactor14 + m[0][3] * SubFactor15);
        Inverse[3][1] = + (m[0][0] * SubFactor13 - m[0][2] * SubFactor16 + m[0][3] * SubFactor17);
        Inverse[3][2] = - (m[0][0] * SubFactor14 - m[0][1] * SubFactor16 + m[0][3] * SubFactor18);
        Inverse[3][3] = + (m[0][0] * SubFactor15 - m[0][1] * SubFactor17 + m[0][2] * SubFactor18);

        T Determinant = m[0][0] * Inverse[0][0] 
                      + m[0][1] * Inverse[1][0] 
                      + m[0][2] * Inverse[2][0] 
                      + m[0][3] * Inverse[3][0];

        Inverse /= Determinant;
        
        return Inverse;
    }
}

#endif//__gtx_inverse_transpose_inl__
