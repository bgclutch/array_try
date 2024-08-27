#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y);

void stair_print(int *arr, const unsigned int main_size);

void sum_matrix(int *arr_1, int *arr_2, int *arr_3, const unsigned int size_x, const unsigned int size_y);

void matrix_times(int *arr_1, int *arr_2, int *arr_3, const unsigned int = rows, const unsigned int = cols)

int main(void)
{
    //printf("input size of your array[rows][cols]:\n\n");  

    //printf("number to input %u\n\n", main_size);

    // const unsigned int size_x = 5;
    // const unsigned int size_y = 5;
    // unsigned int main_size = 0;

    // for(unsigned int counter = size_x; counter - 1 > 0; counter--)
    //     {
    //         main_size += (counter - 1);
    //     }

    //printf("number to input %u\n\n", main_size);

    //printf("input your array's elements:\n");

    // for(unsigned int index = 0; index < main_size; index++)
    // {
    //     scanf("%d ", &arr[index]);
    // }
    // const unsigned int size_x = 5;
    //const unsigned int size_y = 5;
    //unsigned int main_size = 0;

    
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int array[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    // printf("\n\n");

    // array_print(array, size_x, size_y);
    // printf("\n");
    // stair_print(arr, main_size);

    // const unsigned int x = 3;
    // const unsigned int y = 4;
    // int arr_sum_1[x][y] = {{10, 20, 30, 40},
    //                        {50, 60, 70, 80},
    //                        {90, 100, 110, 120}};

    // int arr_sum_2[x][y] = {{1, 2, 3, 4},
    //                        {5, 6, 7, 8},
    //                        {9, 11, 11, 13}};

    // int arr_res_sum[x][y] = {{0}};

    // sum_matrix(*arr_sum_1, *arr_sum_2, *arr_res_sum, x, y);
    // array_print(*arr_res_sum, x, y);

    // int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // unsigned int main_size = 0;

    // for(unsigned int counter = x; counter - 1 > 0; counter--)
    //     {
    //         main_size += (counter - 1);
    //     }
    
    // stair_print(arr, main_size);

    int arr_matrix_1[2][3] = {{1, 2, 3},
                              {4, 5, 6}};

    int arr_matrix_2[3][3] = {{7, 7, 9},
                              {10, 11, 12},
                              {13, 14, 15}};

    int arr_matrix_result[2][3] = {{0}};

    matrix_times();

    array_print();

    return 0;
}

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y)
{   
    for(unsigned int index_x = 0; index_x < size_x ; index_x++)
    {
        for(unsigned int index_y = 0; index_y < size_y; index_y++)
        {                         
            printf ("%u ", *((unsigned int*)arr + index_x * size_y + index_y));
        }
        printf("\n");
    }
}

void stair_print(int *arr, const unsigned int main_size)
{   
    unsigned int to_outp = 1;
    for(unsigned int index = 0; index < main_size; to_outp++)
    {
        for(unsigned int outp = to_outp; outp > 0; index++, outp--)
        {
            printf("%u ", *((unsigned int*)arr + index));
        }
        printf("\n");
    }
}

void sum_matrix(int *arr_1, int *arr_2, int *arr_3, const unsigned int size_x, const unsigned int size_y)
{
    for(unsigned int index_x = 0; index_x < size_x ; index_x++)
    {
        for(unsigned int index_y = 0; index_y < size_y; index_y++) //min size + dynamic mem
        {                         
            *((unsigned int*)arr_3 + index_x * size_y + index_y) = 
            *((unsigned int*)arr_1 + index_x * size_y + index_y) +
            *((unsigned int*)arr_2 + index_x * size_y + index_y);
        }
    }
}
void matrix_times(int *arr_1, int *arr_2, int *arr_3, const unsigned int = rows, const unsigned int = cols)
{
    for(unsigned int i = 0; i < rows; i++)
    {
        for(unsigned int j = 0; j < cols; j++)
        {
            *((unsigned int*)arr_3 + i *  + j) = 

        }
    }
    
}

int sum_lines_and_cols()
{
    int sum = 0;
    for(int i = 0; ; i++)
        for(int j = 0; ; j++)
        {
            sum += *((unsigned int *)arr_1 + i * x + j)  
        }
    return ;
}