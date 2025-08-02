#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <assert.h>

#define CONCAT(a,b) a##b
#define SQUARE(a) (a*a) //problem with this is if the input is something like 2+3 it will be 2+3*2+3
#define SQUARE1(a) ((a)*(a))
int main()
{
    int a[]={1,2,3,5,6,7,8};
    int b[]={2,3,5,7,9};
    int a1=sizeof(a)/sizeof(a[0]);
    int b1=sizeof(b)/sizeof(b[0]);
//    printf("%d %d \n",a1,b1);

    assert(intersection(a,a1,b,b1));
    assert(setdifference(a,a1,b,b1));
    assert(union_set(a,a1,b,b1));

    printf("\n%d",CONCAT(123,456));
    printf("\n%d",SQUARE(2+3));
    printf("\n%d\n",SQUARE1(2+3));
    int row=3,col=3;
    int arr[row][col];
    int transpose[col][row];
    matrix_insert(row , col, arr);
    display_matrix(row, col, arr);

    transpose_matrix(row , col, arr, transpose);
    printf("\n");
    display_matrix(col , row, transpose);
    printf("\n");
    sum_column(row, col, arr);
    printf("\n");
    int sparse[4][4] = {
    {0, 0, 0, 0},
    {0, 5, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 9}
    };
    printf("\n");
    sparse_matrix(row , col, arr);
    printf("\n");
    printf("\n");
    sparse_matrix(4,4,sparse);
    printf("\n");
    return 0;
}
