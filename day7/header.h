//question 1 example 1 matrix dynamic allocation , method 1 
#define INT_ALLOC_FAIL NULL
#define MATRIX_ALLOC_FAIL NULL

struct _single_pointer_matrix_
{
    int *arr;
    int row, col;

};
typedef struct _single_pointer_matrix_ smatrix;


smatrix* initialize_smatrix(int ,int );
void free_resources(smatrix *);
int insert_smatrix(smatrix *);
void display_smatrix(smatrix *);