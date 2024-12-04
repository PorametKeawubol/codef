#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned int u32;

int main()
{
    u32 n;
    scanf("%u", &n);
    getchar();
    while (n--)
    {
        char ch;
        scanf("%c", &ch);
        getchar();
        char str[10] = "codeforces";
        u32 bool = 0;
        for (u32 i = 0; i < 10; i++)
        {
            if (ch == str[i])
            {
                bool = 1;
                break;
            }
        }
        bool ? printf("Yes\n") : printf("No\n");
    }
}