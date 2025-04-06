#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 10
#define cols 8

int init_array(long long *d)
{
    int x, y, s = 1;
    for (y = 0; y < rows; y++)
    {
        for (x = 0; x < cols; x++)
        {
            d[y * cols + x] = s;
            s++;
        }
    }
    return 0;
}

void print_array(long long *d)
{
    printf("Array contents:\n");
    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < cols; x++)
        {
            printf("%lld\t", d[y * cols + x]);
        }
        printf("\n");
    }
}

// Method 2: Row-major
long long sum_array_specify_quadrant_method2(long long *d, int n)
{
    long long sum = 0;
    int start_row, end_row, start_col, end_col;

    // Define quadrant boundaries
    switch (n)
    {
    case 0: // Top-left
        start_row = 0;
        end_row = rows / 2;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 1: // Top-right
        start_row = 0;
        end_row = rows / 2;
        start_col = cols / 2;
        end_col = cols;
        break;
    case 2: // Bottom-left
        start_row = rows / 2;
        end_row = rows;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 3: // Bottom-right
        start_row = rows / 2;
        end_row = rows;
        start_col = cols / 2;
        end_col = cols;
        break;
    default:
        return 0;
    }

    for (int y = start_row; y < end_row; y++)
    {
        for (int x = start_col; x < end_col; x++)
        {
            sum += d[y * cols + x];
        }
    }

    return sum;
}

int main()
{
    long long *ptr;
    long long r1, r2, r3, r4;

    ptr = (long long *)malloc(rows * cols * sizeof(long long));

    if (ptr == NULL)
    {
        printf("Memory allocation Error!!\n");
        printf("Program terminated\n");
        return 1;
    }

    init_array(ptr);
    print_array(ptr);

    r1 = sum_array_specify_quadrant_method2(ptr, 0);
    r2 = sum_array_specify_quadrant_method2(ptr, 1);
    r3 = sum_array_specify_quadrant_method2(ptr, 2);
    r4 = sum_array_specify_quadrant_method2(ptr, 3);

    printf("\nResults:\n");
    printf("sum of array in quadrant 0 = %lld\n", r1); // Should be 370
    printf("sum of array in quadrant 1 = %lld\n", r2); // Should be 450
    printf("sum of array in quadrant 2 = %lld\n", r3); // Should be 1170
    printf("sum of array in quadrant 3 = %lld\n", r4); // Should be 1250

    free(ptr);
    return 0;
}