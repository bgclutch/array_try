#include <stdio.h>
#include <math.h>

#include "dynamic_arrays_processing.h"

void process_arrs(const int dynamic_rows, const int* arrays_sizes, int** arrays_ptrs)
{
    for(int ar_ptr = 0; ar_ptr < dynamic_rows; ar_ptr++)
    {
        for(int dif_size = 0; dif_size < *(arrays_sizes + ar_ptr); dif_size++)
        {
            printf("input %d element in %d line:\n", dif_size + 1, ar_ptr + 1);
            scanf("%d", *(arrays_ptrs + ar_ptr) + dif_size);
        }
        line_of_stars();
    }
}


void cleaner(const int dynamic_rows, int* arrays_sizes, int** arrays_ptrs)
{
    for(int i = 0; i < dynamic_rows; i++)
    {
        free(*(arrays_ptrs + i));
        *(arrays_ptrs + i) = NULL;
    }

    free(arrays_sizes);
    arrays_sizes = NULL;

    free(arrays_ptrs);
    arrays_ptrs = NULL;
}