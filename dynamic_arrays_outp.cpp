#include <stdio.h>
#include <math.h>

#include "dynamic_arrays_outp.h"
#include "dynamic_arrays_processing.h"

void outp_arrs(const int dynamic_rows, const int* arrays_sizes, const int* const* const arrays_ptrs)
{
     for(int ar_ptr = 0; ar_ptr < dynamic_rows; ar_ptr++)
    {
        for(int dif_size = 0; dif_size < *(arrays_sizes + ar_ptr); dif_size++)
        {
            printf("%3d ", *(*(arrays_ptrs + ar_ptr) + dif_size));
        }
        printf("\n");
    }
}
