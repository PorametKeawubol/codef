#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int u32;

int main()
{
    u32 n;
    scanf("%u", &n);

    while (n--)
    {
        u32 a, b, c;
        scanf("%u %u %u", &a, &b, &c);

        ((a + b == c) || (a + c == b) || (b + c == a)) ? printf("Yes\n") : printf("No\n");
    }
}