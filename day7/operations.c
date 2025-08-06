#include"header.h"
#include<stdlib.h>
#include<stdio.h>


smatrix* initialize_smatrix(int row,int col)
{
    smatrix *mat;
    mat=(smatrix *)malloc(sizeof(smatrix));
    if(mat==NULL)
    {
            return NULL;
    }
    mat->row=row;
    mat->col=col;
    mat->arr=(int *)malloc(sizeof(int)*row*col);
    return mat;

}

int insert_smatrix(smatrix *mat)
{
    for(int i=0;i<mat->row;i++)
    {
        for(int j=0;j<mat->row;j++)
        {
            *(mat->arr+(i*mat->col)+j)=i+j;
        }
    }
    printf("\n Insertion successfull");
    return 1;

}

void display_smatrix(smatrix *mat)
{
    printf("\n");
    for(int i=0;i<mat->row;i++)
    {
        for(int j=0;j<mat->row;j++)
        {
            printf("%d  ",*(mat->arr+(i*mat->col)+j));
        }
        printf("\n");
    }
    printf("\n");

}


void free_resources(smatrix *mat)
{
    free(mat->arr);
    free(mat);
    
}