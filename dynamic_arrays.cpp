#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void array_print(int arr[], const int size_x, const int size_y);

int main(void)
{
    printf("input number of lines:\n");

    int rows = 0;
    scanf("%d", &rows);

    int *arrays_size = (int *) calloc(rows, sizeof(int));

    //int *arrays_ptr = (int *) calloc(rows, sizeof(int));
    
    for(int i = 0; i < rows; i++)
    {
        printf("input len if your %d line", i);
        scanf("%d ", (arrays_size+ i));
    }

    return 0;
}


void array_print(int arr[], const int size_x, const int size_y)
{   
    for(int index_x = 0; index_x < size_x ; index_x++)
    {
        for(int index_y = 0; index_y < size_y; index_y++)
        {                         
            printf ("%3u ", *((unsigned int*)arr + index_x * size_y + index_y));
        }
        printf("\n");
    }
}