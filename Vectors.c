#include "Vectors.h"
#include <string.h>

int main()
{
    Vec3 Vector = {1,2,0};

    printf("%f\n", vec_norm(Vector));
    return 0;
}