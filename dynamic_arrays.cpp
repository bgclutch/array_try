#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    printf("input number of lines:\n");

    int dynamic_rows = 0;
    scanf("%d", &dynamic_rows);
    printf("\n");

    int *arrays_sizes = (int *) calloc((unsigned int)dynamic_rows, sizeof(int));

    int **arrays_ptrs  = (int **) calloc((unsigned int)dynamic_rows, sizeof(int*));

    printf("sizes = %p, ptrs = %p\n\n", arrays_sizes, arrays_ptrs);

    for(int i = 0; i < dynamic_rows; i++)
    {
        printf("input len if your %d line:\n", i + 1);
        scanf("%d", (arrays_sizes + i));
        *(arrays_ptrs + i) = (int *) calloc((unsigned int)*(arrays_sizes + i), sizeof(int));
        printf("%p\n\n", arrays_ptrs);
    }

    for(int ar_ptr = 0; ar_ptr < dynamic_rows; ar_ptr++)
    {
        for(int dif_size = 0; dif_size < *(arrays_sizes + ar_ptr); dif_size++)
        {
            printf("input %d element in %d line", dif_size + 1, ar_ptr + 1);
            scanf("%d", ((*(arrays_ptrs) + dif_size) + ar_ptr));
        }
    }


    for(int )
    {
        for()
        {

        }
        printf("\n");
    }



    for(int i = 0; i < dynamic_rows; i++)
    {
        free(*(arrays_ptrs + i));
        *(arrays_ptrs + i) = NULL;
    }

    free(arrays_sizes);
    arrays_sizes = NULL;

    free(arrays_ptrs);
    arrays_ptrs = NULL;

    return 0;
}