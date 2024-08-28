#include <stdio.h>
#include <math.h>

#include "dynamic_arrays_declare.h"

void decl_arrs(const int dynamic_rows, int* arrays_sizes, int** arrays_ptrs)
{
    for(int i = 0; i < dynamic_rows; i++)
    {
        printf("input len of your %d line:\n", i + 1);
        scanf("%d", (arrays_sizes + i));
        *(arrays_ptrs + i) = (int *) calloc((unsigned int)*(arrays_sizes + i), sizeof(int));
        //printf("%p\n\n", (arrays_ptrs + i));
    }
    line_of_stars();
}

void line_of_stars()
{
    printf("\n");

    for(int i = 0; i < 50; i++)
        printf("**");

    printf("\n");
}