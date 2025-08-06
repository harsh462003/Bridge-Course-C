#include"header.h"
#include <stdio.h>
#include<assert.h>
#include<stdlib.h>


int main()
{
    smatrix *test;
    test=initialize_smatrix(3,3);
    printf("created ");
    printf("removed");
    assert(insert_smatrix(test)==1);
    printf("Insetered element");
    display_smatrix(test);
    free_resources(test);

    return 0;
}
