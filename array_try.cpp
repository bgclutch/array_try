#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y);

void stair_print(int *arr, const unsigned int main_size);

int main(void)
{
    //printf("input size of your array[rows][cols]:\n\n");  

    //printf("number to input %u\n\n", main_size);

    const unsigned int size_x = 5;
    const unsigned int size_y = 5;
    unsigned int main_size = 0;

    for(unsigned int counter = size_x; counter - 1 > 0; counter--)
        {
            main_size += (counter - 1);
        }

    printf("number to input %u\n\n", main_size);

    //printf("input your array's elements:\n");

    // for(unsigned int index = 0; index < main_size; index++)
    // {
    //     scanf("%d ", &arr[index]);
    // }
    // const unsigned int size_x = 5;
    //const unsigned int size_y = 5;
    //unsigned int main_size = 0;

    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    printf("\n\n");

    array_print(array, size_x, size_y);
    printf("\n");
    stair_print(arr, main_size);


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