#include <stdio.h>

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y);

int main(void)
{
    /*
    printf("input size of your array:\n\n");
    int ar_size = 0;
    scanf("%d", &ar_size);
    */
    const int SIZE_X = 5;
    const int SIZE_Y = 3;
    int array[SIZE_Y][SIZE_X] = {{1, 11, 121, 131, 141}, //array initialization 
                                 {2, 22, 212, 232, 242},
                                 {3, 33, 313, 313, 343}};
    printf("\n");
    //int (*arr)[SIZE_X];
    //arr = array;
    array_print(*array, SIZE_X, SIZE_Y);

    return 0;
}

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y)
{
    for(unsigned int index_y = 0; index_y < size_y; index_y++)
    {
        for(unsigned int index_x = 0; index_x < size_x; index_x++)
        { 
            printf("address = %p\n", (int*)(size_t)arr + index_y * size_x + index_x);                                // address changes dex size to hex address
            printf("element %u %u = %u\n\n", index_y, index_x, *((unsigned int*)arr + index_y * size_x + index_x));  // element
        }
        printf("\n\n\n");
    }
}