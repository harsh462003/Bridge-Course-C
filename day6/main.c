#include<stdio.h>
#include"header.h"
#include<assert.h>
#include<string.h>

int main()
{
    clg msis;
    msis=initialize_details(10,"MSIS");
    assert(msis.status==CREATED);
    

    stu s;
    s.regno=1;
    strcpy(s.name,"Harshith");
    s.marks=90;
    s.age=22;
    msis=insert_student_details(s,msis);
    assert(msis.status==INSERTED_STUDENT);

    s.regno=2;
    strcpy(s.name,"Darshan");
    s.marks=100;
    s.age=22;
    msis=insert_student_details(s,msis);
    assert(msis.status==INSERTED_STUDENT);
    display_student(msis);

    search_student(msis,3);



    printf("\n\n\n");
    array *test,*temp;
    test=initialize_array(5);
    assert(test->c_size == 0);
    assert(test->t_size == 5);
    assert(test->arr != NULL);

    assert(insert_data(test,1)==1);
    assert(insert_data(test,2)==1);
    assert(insert_data(test,3)==1);
    assert(insert_data(test,4)==1);
    assert(insert_data(test,5)==1);

    display_arr(test);
    search_element(test,3);

    temp=deallocate(test);
    assert(temp == NULL);
    

    return 0;
}
