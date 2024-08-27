#include <stdio.h>

void array_print(int *arr, const unsigned int size_x);

int main(void)
{
    /*
    printf("input size of your array:\n\n");
    int ar_size = 0;
    scanf("%d", &ar_size);
    */
    const int SIZE_X = 5;
    //const int SIZE_Y = 3;
    int array[SIZE_X] = {10, 11, 12, 13, 14}; //array initialization 
    printf("\n");
    array_print(array, SIZE_X);

    return 0;
}

void array_print(int *arr, const unsigned int size_x)
{
    for(unsigned int index = 0; index < size_x; index++)
    {
        printf("%u element's address    = %p\n", index, arr + index);
        printf("size_t + index         = %lu\n", (size_t)arr + index); //size of element's address in bytes
        printf("address                = %p\n", (int*)(size_t)arr + index);
        printf("element                = %u\n\n", *(int*)(size_t)arr + index);
    }
}