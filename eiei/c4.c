#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 5000000
#define cols 300 // Can be changed to 250 or 300 for testing

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

// Method 1: Column-major traversal
long long sum_array_specify_quadrant_method1(long long *d, int n)
{
    long long sum = 0;
    int start_row, end_row, start_col, end_col;

    switch (n)
    {
    case 0:
        start_row = 0;
        end_row = rows / 2;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 1:
        start_row = 0;
        end_row = rows / 2;
        start_col = cols / 2;
        end_col = cols;
        break;
    case 2:
        start_row = rows / 2;
        end_row = rows;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 3:
        start_row = rows / 2;
        end_row = rows;
        start_col = cols / 2;
        end_col = cols;
        break;
    default:
        return 0;
    }

    // Column-major traversal
    for (int x = start_col; x < end_col; x++)
    {
        for (int y = start_row; y < end_row; y++)
        {
            sum += d[y * cols + x];
        }
    }

    return sum;
}

// Method 2: Row-major traversal
long long sum_array_specify_quadrant_method2(long long *d, int n)
{
    long long sum = 0;
    int start_row, end_row, start_col, end_col;

    switch (n)
    {
    case 0:
        start_row = 0;
        end_row = rows / 2;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 1:
        start_row = 0;
        end_row = rows / 2;
        start_col = cols / 2;
        end_col = cols;
        break;
    case 2:
        start_row = rows / 2;
        end_row = rows;
        start_col = 0;
        end_col = cols / 2;
        break;
    case 3:
        start_row = rows / 2;
        end_row = rows;
        start_col = cols / 2;
        end_col = cols;
        break;
    default:
        return 0;
    }

    // Row-major traversal
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
    clock_t begin, end;
    double time_spent;
    int n = rows * cols;
    int quadrant = 3;
    long long *ptr, r1, r2;

    ptr = (long long *)malloc(n * sizeof(long long));

    if (ptr == NULL)
    {
        printf("Memory allocation Error!!\n");
        printf("Program terminated\n");
        return 1;
    }
    else
    {
        printf("Memory allocation for %dx%d array is successful\n", rows, cols);
    }

    init_array(ptr);
    printf("cols = %d\n", cols);

    begin = clock();
    r1 = sum_array_specify_quadrant_method1(ptr, quadrant);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent: method1=%lf\n", time_spent);

    begin = clock();
    r2 = sum_array_specify_quadrant_method2(ptr, quadrant);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time spent: method2=%lf\n", time_spent);

    printf("Result of quadrant %d using method1 = %lld\n", quadrant, r1);
    printf("Result of quadrant %d using method2 = %lld\n", quadrant, r2);

    free(ptr);
    return 0;
}