#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
static float sqr(float a){
    return a * a;
}

typedef struct 
{
    float x;
    float y;
    float z;
} Vec3;

Vec3 vec_add(Vec3 Vector1, Vec3 Vector2)
{
    Vec3 Vec_Res;
    Vec_Res.x =  Vector1.x + Vector2.x;
    Vec_Res.y =  Vector1.y + Vector2.y;
    Vec_Res.z =  Vector1.z + Vector2.z;
    return Vec_Res;
}

Vec3 vec_sub(Vec3 Vector1, Vec3 Vector2)
{
    Vec3 Vec_Res;
    Vec_Res.x =  Vector1.x - Vector2.x;
    Vec_Res.y =  Vector1.y - Vector2.y;
    Vec_Res.z =  Vector1.z - Vector2.z;
    return Vec_Res;
}

Vec3 vec_scale(Vec3 Vector1, float Scalar)
{
    Vec3 Vec_Res;
    Vec_Res.x = Vec_Res.x*Scalar;
    Vec_Res.y = Vec_Res.y*Scalar;
    Vec_Res.z = Vec_Res.z*Scalar;
    return Vec_Res;
}

float vec_dot(Vec3 Vector1, Vec3 Vector2)
{
    float Res;
    Res = (Vector1.x*Vector2.x) +
        (Vector1.y*Vector2.y) +
        (Vector1.z*Vector2.z);
    return Res;
}
Vec3 vec_cross(Vec3 Vector1, Vec3 Vector2)
{
    Vec3 vec_res;
    vec_res.x = (Vector1.y*Vector2.z - Vector1.z*Vector2.y);
    vec_res.y = (Vector1.x*Vector2.z - Vector1.z*Vector2.x);
    vec_res.z = (Vector1.x*Vector2.y - Vector1.y*Vector2.x);

    return vec_res;
}

float vec_norm(Vec3 Vector1)
{
    float len;
    len = sqrt(sqr(Vector1.x) + sqr(Vector1.y) + sqr(Vector1.z));
    return len;
}



