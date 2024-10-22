#include <stdio.h>

int main(void) {
    int a, b, c, d, e;
    a = 2;
    b = 4;
    c = 5;
    d = 3;
    e = 6;

    printf("%d\n", 7 - 24 / 8 * b + e);
    printf("%d\n", 18 / d - 7 + 2 * c);
    printf("%d\n", e * b / 12 + 72 / 8 - 9);
    printf("%d\n", 17 - e / a + b * d);
    printf("%d\n", -2 * (1 * b - a / a) + (e + a - d));
    printf("%d\n", -1 * ((3 - b * 7) / c - (a * 24 / e)));
    printf("%d\n", d * c ^ a / 15 - (c - a ^ a));
    printf("%d\n", (1 ^ b * a ^ a + d ^ d) - a ^ c / b);

    return 0;
}
