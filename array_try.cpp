#include <stdio.h>

void array_print(int *arr, const int size);

int main(void)
{
    /*
    printf("input size of your array:\n\n");
    int ar_size = 0;
    scanf("%d", &ar_size);
    */
    const int SIZE_X = 5;
    //const int SIZE_Y = 7;
    int array[SIZE] = {0, 1, 2, 3, 4}; //array initialization 
    array_print(array, SIZE);

    return 0;
}

void array_print(int *arr, const int size)
{
    for(int index = 0; index < size; index++)
        printf("array[%d] = %d\n", index, *(arr+index));
}