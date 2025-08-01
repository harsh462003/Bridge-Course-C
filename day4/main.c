#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <assert.h>
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


    return 0;
}
