#include <stdio.h>
#include <stdlib.h>

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y);

int main(void)
{
    printf("input size of your array[rows][cols]:\n\n");
    unsigned int size_x = 0;
    unsigned int size_y = 0;
    scanf("%u %u", &size_x, &size_y);
    const unsigned int main_size = size_x * size_y;
    int *arr;
    arr = (int*) malloc(main_size * sizeof(double));

    printf("input your array's elements:\n");
    // while()
    // {

    // }
    for(unsigned int index = 0; index < main_size; index++)
    {
        scanf("%d ", &arr[index]);
    }

    printf("\n");
    array_print(arr, size_x, size_y);

    free(arr);

    return 0;
}

void array_print(int *arr, const unsigned int size_x, const unsigned int size_y)
{
    for(unsigned int index_x = 0; index_x < size_x; index_x++)
    {
        for(unsigned int index_y = 0; index_y < size_y; index_y++)
        {                         
            printf ("%u ", *((unsigned int*)arr + index_x * size_y + index_y));
        }
        printf("\n");
    }
}