#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int u32;

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    // int ans = 0;
    // int num = 0;
    // while (n > 0)
    // {
    //     for (u32 i = 0;; i++)
    //     {
    //         if (num + (1 << i) > n)
    //         {
    //             break;
    //         }
    //         num += (1 << i);
    //         printf("%d\n", ans);
    //     }
    //     ans += 1;

    //     n -= num;
    //     num = 0;
    // }

    // printf("%d", ans - 1);
    while (n != 1)
    {
        if (n & 1)
        {
            n--;
            i++;
            n /= 2;
        }
        else
        {
            n /= 2;
        }
    }
    printf("%d", i + 1);
    return 0;
}