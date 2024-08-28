#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void decl_arrs(const int dynamic_rows, int* arrays_sizes, int** arrays_ptrs);

void process_arrs(const int dynamic_rows, const int* arrays_sizes, int** arrays_ptrs);

void outp_arrs(const int dynamic_rows, const int* arrays_sizes, int** arrays_ptrs);

void cleaner(const int dynamic_rows, int* arrays_sizes, int** arrays_ptrs);


int main(void)
{
    printf("input number of lines:\n");

    int dynamic_rows = 0;
    scanf("%d", &dynamic_rows);
    printf("\n");

    int *arrays_sizes = (int *) calloc((unsigned int)dynamic_rows, sizeof(int));

    int **arrays_ptrs  = (int **) calloc((unsigned int)dynamic_rows, sizeof(int*));

    decl_arrs   (dynamic_rows, arrays_sizes, arrays_ptrs);

    process_arrs(dynamic_rows, arrays_sizes, arrays_ptrs);

    outp_arrs   (dynamic_rows, arrays_sizes, arrays_ptrs);

    cleaner     (dynamic_rows, arrays_sizes, arrays_ptrs);

    return 0;
}


void decl_arrs(const int dynamic_rows, int* arrays_sizes, int** arrays_ptrs)
{
    for(int i = 0; i < dynamic_rows; i++)
    {
        printf("input len of your %d line:\n", i + 1);
        scanf("%d", (arrays_sizes + i));
        *(arrays_ptrs + i) = (int *) calloc((unsigned int)*(arrays_sizes + i), sizeof(int));
        //printf("%p\n\n", (arrays_ptrs + i));
    }
}

void process_arrs(const int dynamic_rows, const int* arrays_sizes, int** arrays_ptrs)
{
    for(int ar_ptr = 0; ar_ptr < dynamic_rows; ar_ptr++)
    {
        for(int dif_size = 0; dif_size < *(arrays_sizes + ar_ptr); dif_size++)
        {
            printf("input %d element in %d line:\n", dif_size + 1, ar_ptr + 1);
            scanf("%d", *(arrays_ptrs + ar_ptr) + dif_size);
        }
        printf("\n");
    }
}

void outp_arrs(const int dynamic_rows, const int* arrays_sizes, int** arrays_ptrs)
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