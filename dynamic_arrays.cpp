#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

#include <dynamic_arrays_outp.h>

int main(void)
{
    printf("input number of lines:\n");

    int dynamic_rows = 0;
    
    scanf("%d", &dynamic_rows);
    line_of_stars();

    int *arrays_sizes  = (int *)  calloc((unsigned int)dynamic_rows,  sizeof(int));

    int **arrays_ptrs  = (int **) calloc((unsigned int)dynamic_rows, sizeof(int*));

    decl_arrs    (dynamic_rows, arrays_sizes, arrays_ptrs);

    line_of_stars();

    process_arrs (dynamic_rows, arrays_sizes, arrays_ptrs);

    line_of_stars();

    outp_arrs    (dynamic_rows, arrays_sizes, arrays_ptrs);

    line_of_stars();

    cleaner      (dynamic_rows, arrays_sizes, arrays_ptrs);

    return 0;
}

