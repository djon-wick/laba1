#include <stdio.h>

#include "myfunc.h"

int main()
{
    int a, b, c;
    double x1 = 0, x2 = 0;
    if (scanf("%d %d %d", &a, &b, &c) == 3)
        korenb(a, b, c, &x1, &x2);
    return 0;
}

