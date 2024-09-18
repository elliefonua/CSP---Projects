#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    a = 2;
    b = 4;
    c = 5;
    d = 3;
    e = 6;
    printf("%d", (int)7 - (int)24 / (int)8 * (int)b + (int)e);
    printf("%d", (int)18 / (int)d - (int)7 + (int)2 * (int)c);
    printf("%d", (int)e * (int)b / (int)12 + (int)72 / (int)8 - (int)9);
    printf("%d", (int)(17 - (int)e / (int)a) + (int)b * (int)d);
    printf("%d", (int)-2 * (int)(1 * (int)b - (int)a / (int)a) + (int)(e + (int)a - (int)d));
    printf("%d", (int)-1 * (int)((3 - (int)b * (int)7) / (int)c) - (int)(a * (int)24 / (int)e)));
    printf("%d", (int) (d * (int)c ^ (int)a / (int)15) - (int) (c - (int)a ^ (int)a));
    printf("%d", (int) (1 ^ (int)b * (int)a ^ (int)a + (int)d ^ (int)d) - (int)a ^ (int)c / (int)b);
    printf("%d", (int)(22 / (int)a - (float)2.5) ^ (int)a + (int)(b - (int)e / (int)e) ^ (int)a);
    return 0;
}