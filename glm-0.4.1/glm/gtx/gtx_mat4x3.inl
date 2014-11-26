//////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 G-Truc Creation (www.g-truc.net)
//////////////////////////////////////////////////////////////////////////////////
// Author  : Christophe [Groove] Riccio (contact [at] g-truc [point] net)
// Created : 2006-04-17
// Updated : 2006-04-17
// Licence : This source is under GNU LGPL licence
// File    : _mat4x3.inl
//////////////////////////////////////////////////////////////////////////////////

#ifndef __mat4x3_inl__
#define __mat4x3_inl__

#include "./gtx_mat4x3.h"

namespace glm
{
    //////////////////////////////////////////////////////////////
    // Constructors

    template <typename T> 
    inline _xmat4x3<T>::_xmat4x3()
    {
        this->value[0] = _xvec3<T>(1, 0, 0);
        this->value[1] = _xvec3<T>(0, 1, 0);
        this->value[2] = _xvec3<T>(0, 0, 1);
        this->value[3] = _xvec3<T>(0, 0, 0);
    }

    template <typename T> 
    inline _xmat4x3<T>::_xmat4x3(const T f)
    {
        this->value[0] = _xvec3<T>(f, 0, 0);
        this->value[1] = _xvec3<T>(0, f, 0);
        this->value[2] = _xvec3<T>(0, 0, f);
        this->value[3] = _xvec3<T>(0, 0, 0);
    }

    template <typename T> 
    inline _xmat4x3<T>::_xmat4x3
    (
        const T x0, const T y0, const T z0,
        const T x1, const T y1, const T z1,
        const T x2, const T y2, const T z2,
        const T x3, const T y3, const T z3
    )
    {
        this->value[0] = _xvec3<T>(x0, y0, z0);
        this->value[1] = _xvec3<T>(x1, y1, z1);
        this->value[2] = _xvec3<T>(x2, y2, z2);
        this->value[3] = _xvec3<T>(x3, y3, z3);
    }

    template <typename T> 
    inline _xmat4x3<T>::_xmat4x3
    (
        const _xvec3<T> & v0, 
        const _xvec3<T> & v1, 
        const _xvec3<T> & v2,
        const _xvec3<T> & v3
    )
    {
        this->value[0] = v0;
        this->value[1] = v1;
        this->value[2] = v2;
        this->value[3] = v3;
    }

    //////////////////////////////////////////////////////////////
    // Unary updatable operators

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator= (const _xmat4x3<T>& m)
    {
        this->value[0] = m[0];
        this->value[1] = m[1];
        this->value[2] = m[2];
        this->value[3] = m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator+= (const T s)
    {
        this->value[0] += s;
        this->value[1] += s;
        this->value[2] += s;
        this->value[3] += s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator+= (const _xmat4x3<T>& m)
    {
        this->value[0] += m[0];
        this->value[1] += m[1];
        this->value[2] += m[2];
        this->value[3] += m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator-= (const T s)
    {
        this->value[0] -= s;
        this->value[1] -= s;
        this->value[2] -= s;
        this->value[3] -= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator-= (const _xmat4x3<T>& m)
    {
        this->value[0] -= m[0];
        this->value[1] -= m[1];
        this->value[2] -= m[2];
        this->value[3] -= m[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator*= (const T s)
    {
        this->value[0] *= s;
        this->value[1] *= s;
        this->value[2] *= s;
        this->value[3] *= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator*= (const _xmat4x3<T>& m)
    {
        return (*this = *this * m);
    }

    template <typename T> 
    inline _xmat4x3<T> & _xmat4x3<T>::operator/= (const T s)
    {
        this->value[0] /= s;
        this->value[1] /= s;
        this->value[2] /= s;
        this->value[3] /= s;
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator/= (const _xmat4x3<T>& m)
    {
        return (*this = *this / m);
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator++ ()
    {
        ++this->value[0];
        ++this->value[1];
        ++this->value[2];
        ++this->value[3];
        return *this;
    }

    template <typename T> 
    inline _xmat4x3<T>& _xmat4x3<T>::operator-- ()
    {
        --this->value[0];
        --this->value[1];
        --this->value[2];
        --this->value[3];
        return *this;
    }
    
    //////////////////////////////////////////////////////////////
    // Unary constant operators
    template <typename T> 
    inline const _xmat4x3<T> _xmat4x3<T>::operator- () const
    {
        return _xmat4x3<T>(
            -this->value[0], 
            -this->value[1],
            -this->value[2],
            -this->value[3]);
    }

    template <typename T> 
    inline const _xmat4x3<T> _xmat4x3<T>::operator-- (int n) const 
    {
        _xmat4x3<T> m = *this;
        --m.value[0];
        --m.value[1];
        --m.value[2];
        --m.value[3];
        return m;
    }

    template <typename T> 
    inline const _xmat4x3<T> _xmat4x3<T>::operator++ (int n) const
    {
        _xmat4<T> m = *this;
        ++m.value[0];
        ++m.value[1];
        ++m.value[2];
        ++m.value[3];
        return m;
    }

    //////////////////////////////////////////////////////////////
    // Binary operators

    template <typename T> 
    inline _xmat4x3<T> operator+ (const _xmat4x3<T>& m, const T s)
    {
        return _xmat4x3<T>(
            m[0] + s,
            m[1] + s,
            m[2] + s,
            m[3] + s);
    }

    template <typename T> 
    inline _xmat4x3<T> operator+ (const _xmat4x3<T>& m1, const _xmat4x3<T>& m2)
    {
        return _xmat4x3<T>(
            m1[0] + m2[0],
            m1[1] + m2[1],
            m1[2] + m2[2],
            m1[3] + m2[3]);
    }

    template <typename T> 
    inline _xmat4x3<T> operator- (const _xmat4x3<T>& m, const T s)
    {
        return _xmat4x3<T>(
            m[0] - s,
            m[1] - s,
            m[2] - s,
            m[3] - s);
    }

    template <typename T> 
    inline _xmat4x3<T> operator- (const _xmat4x3<T>& m1, const _xmat4x3<T>& m2)
    {
        return _xmat4x3<T>(
            m1[0] - m2[0],
            m1[1] - m2[1],
            m1[2] - m2[2],
            m1[3] - m2[3]);
    }

    template <typename T> 
    inline _xmat4x3<T> operator* (const _xmat4x3<T>& m, const T s)
    {
        return _xmat4x3<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }

    template <typename T> 
    inline _xmat4x3<T> operator* (const T s, const _xmat4x3<T> & m)
    {
        return _xmat4x3<T>(
            m[0] * s,
            m[1] * s,
            m[2] * s,
            m[3] * s);
    }
   
    template <typename T>
    inline _xvec3<T> operator* (const _xmat4x3<T>& m, const _xvec4<T>& v)
    {
        return _xvec3<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w,
            m[0][2] * v.x + m[1][2] * v.y + m[2][2] * v.z + m[3][2] * v.w);
    }

    template <typename T> 
    inline _xvec3<T> operator* (const _xvec4<T>& v, const _xmat4x3<T>& m) 
    {
        return _xvec3<T>(
            m[0][0] * v.x + m[1][0] * v.y + m[2][0] * v.z + m[3][0] * v.w,
            m[0][1] * v.x + m[1][1] * v.y + m[2][1] * v.z + m[3][1] * v.w,
            m[0][2] * v.x + m[1][2] * v.y + m[2][2] * v.z + m[3][2] * v.w);
    }

    template <typename T> 
    inline _xmat4x3<T> operator* (const _xmat4x3<T>& m1, const _xmat4x3<T>& m2)
    {
        const T SrcA00 = m1[0][0];
        const T SrcA01 = m1[0][1];
        const T SrcA02 = m1[0][2];
        const T SrcA10 = m1[1][0];
        const T SrcA11 = m1[1][1];
        const T SrcA12 = m1[1][2];
        const T SrcA20 = m1[2][0];
        const T SrcA21 = m1[2][1];
        const T SrcA22 = m1[2][2];
        const T SrcA30 = m1[3][0];
        const T SrcA31 = m1[3][1];
        const T SrcA32 = m1[3][2];

        const T SrcB00 = m2[0][0];
        const T SrcB01 = m2[0][1];
        const T SrcB02 = m2[0][2];
        const T SrcB10 = m2[1][0];
        const T SrcB11 = m2[1][1];
        const T SrcB12 = m2[1][2];
        const T SrcB20 = m2[2][0];
        const T SrcB21 = m2[2][1];
        const T SrcB22 = m2[2][2];
        const T SrcB30 = m2[3][0];
        const T SrcB31 = m2[3][1];
        const T SrcB32 = m2[3][2];

        _xmat4x3<T> Result;
        Result[0][0] = SrcA00 * SrcB00 + SrcA10 * SrcB01 + SrcA20 * SrcB02;
        Result[0][1] = SrcA01 * SrcB00 + SrcA11 * SrcB01 + SrcA21 * SrcB02;
        Result[0][2] = SrcA02 * SrcB00 + SrcA12 * SrcB01 + SrcA22 * SrcB02;
        Result[1][0] = SrcA00 * SrcB10 + SrcA10 * SrcB11 + SrcA20 * SrcB12;
        Result[1][1] = SrcA01 * SrcB10 + SrcA11 * SrcB11 + SrcA21 * SrcB12;
        Result[1][2] = SrcA02 * SrcB10 + SrcA12 * SrcB11 + SrcA22 * SrcB12;
        Result[2][0] = SrcA00 * SrcB20 + SrcA10 * SrcB21 + SrcA20 * SrcB22;
        Result[2][1] = SrcA01 * SrcB20 + SrcA11 * SrcB21 + SrcA21 * SrcB22;
        Result[2][2] = SrcA02 * SrcB20 + SrcA12 * SrcB21 + SrcA22 * SrcB22;
        Result[3][0] = SrcA00 * SrcB30 + SrcA10 * SrcB31 + SrcA20 * SrcB32 + SrcA30;
        Result[3][1] = SrcA01 * SrcB30 + SrcA11 * SrcB31 + SrcA21 * SrcB32 + SrcA31;
        Result[3][2] = SrcA02 * SrcB30 + SrcA12 * SrcB31 + SrcA22 * SrcB32 + SrcA32;
        return Result;
    }

    template <typename T> 
    inline _xmat4x3<T> operator/ (const _xmat4x3<T>& m, const T s)
    {
        return _xmat4x3<T>(
            m.value[0] / s,
            m.value[1] / s,
            m.value[2] / s,
            m.value[3] / s);        
    }
/*
    template <typename T> 
    inline _xmat4x3<T> operator/ (const T s, const _xmat4x3<T>& m)
    {
        return _xmat4x3<T>(
            s / m.value[0],
            s / m.value[1],
            s / m.value[2],
            s / m.value[3]);        
    }
    
    template <typename T> 
    _xvec3<T> operator/ (const _xmat4x3<T>& m, const _xvec4<T>& v)
    {
      
    }

    template <typename T> 
    _xvec3<T> operator/ (const _xvec4<T>& v, const _xmat4x3<T>& m)
    {
      
    }
*/

    template <typename T> 
    inline _xmat4x3<T> operator/ (const _xmat4x3<T>& m1, const _xmat4x3<T>& m2)
    {
        T SubFactor01 = m2[2][1] * m2[3][2] - m2[3][1] * m2[2][2];
        T SubFactor02 = m2[2][0] * m2[3][2] - m2[3][0] * m2[2][2];
        T SubFactor03 = m2[2][0] * m2[3][1] - m2[3][0] * m2[2][1];
        T SubFactor04 = m2[1][1] * m2[3][2] - m2[3][1] * m2[1][2];
        T SubFactor05 = m2[1][0] * m2[3][2] - m2[3][0] * m2[1][2];
        T SubFactor06 = m2[1][0] * m2[3][1] - m2[3][0] * m2[1][1];
        T SubFactor07 = m2[1][1] * m2[2][2] - m2[2][1] * m2[1][2];
        T SubFactor08 = m2[1][0] * m2[2][2] - m2[2][0] * m2[1][2];
        T SubFactor09 = m2[1][0] * m2[2][1] - m2[2][0] * m2[1][1];

        _xmat4x3<T> Inverse(
            + m2[1][3] * SubFactor01,
            - m2[1][3] * SubFactor02,
            + m2[1][3] * SubFactor03,
            -(m2[1][0] * SubFactor01 - m2[1][1] * SubFactor02 + m2[1][2] * SubFactor03),

            - m2[0][3] * SubFactor01,
            + m2[0][3] * SubFactor02,
            - m2[0][3] * SubFactor03,
            +(m2[0][0] * SubFactor02 - m2[0][1] * SubFactor02 + m2[0][2] * SubFactor03),

            + m2[0][3] * SubFactor04,
            - m2[0][3] * SubFactor05,
            + m2[0][3] * SubFactor06,
            -(m2[0][0] * SubFactor04 - m2[0][1] * SubFactor05 + m2[0][2] * SubFactor06),

            - m2[0][3] * SubFactor07,
            + m2[0][3] * SubFactor08,
            - m2[0][3] * SubFactor09,
            +(m2[0][0] * SubFactor07 - m2[0][1] * SubFactor08 + m2[0][2] * SubFactor09));

        T Determinant = m2[0][0] * Inverse[0][0] 
                      + m2[0][1] * Inverse[1][0] 
                      + m2[0][2] * Inverse[2][0] 
                      + m2[0][3] * Inverse[3][0];

        Inverse /= Determinant;
        
        return m1 * Inverse;
    }

} //namespace glm

#endif //__mat4x3_inl__
