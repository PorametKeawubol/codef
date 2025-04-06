#include <stdio.h>
#include <stdlib.h>

#define rows 10
#define cols 8

void init_array(long long **d)
{
    int x, y, s = 1;
    for (y = 0; y < rows; y++)
        for (x = 0; x < cols; x++)
            d[y][x] = s++;
}

void print_array(long long **d)
{
    int x, y;
    printf("data--------------------------------------\n");
    for (y = 0; y < rows; y++)
    {
        for (x = 0; x < cols; x++)
            printf("%lld, ", d[y][x]);
        printf("\n");
    }
}

int main()
{
    long long **ptr;
    int i;

    // จองหน่วยความจำให้เหมือนอาร์เรย์ 2 มิติ
    ptr = (long long **)malloc(rows * sizeof(long long *));
    for (i = 0; i < rows; i++)
        ptr[i] = (long long *)malloc(cols * sizeof(long long));

    if (ptr == NULL)
    {
        printf("Memory allocation Error!!\n");
        printf("Program terminated\n");
        return 0;
    }

    // เรียกใช้ฟังก์ชัน
    init_array(ptr);
    print_array(ptr);

    // คืนหน่วยความจำ
    for (i = 0; i < rows; i++)
        free(ptr[i]);
    free(ptr);

    return 0;
}
