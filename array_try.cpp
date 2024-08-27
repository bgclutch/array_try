#include <stdio.h>

void array_print(int *arr, const int size_x, const int size_y);

int main(void)
{
    /*
    printf("input size of your array:\n\n");
    int ar_size = 0;
    scanf("%d", &ar_size);
    */
    const int SIZE_X = 5;
    const int SIZE_Y = 3;
    int array[SIZE_Y][SIZE_X] = {{10, 11, 12, 13, 14},
                                 {20, 21, 22, 23, 24},
                                 {30, 31, 32, 33, 34}}; //array initialization 

    array_print(array, SIZE_Y, SIZE_X);

    return 0;
}

void array_print(int *arr, const int size_x, const int size_y)
{
    for(int index = 0; index < size; index++)
        printf("array[%d] = %d\n", index, *(arr+index));
}