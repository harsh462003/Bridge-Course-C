#include <stdio.h>
#include <stdlib.h>
#include "day5.h"
#include <assert.h>

int main()
{
    Company test;
    test=initialize(10,"AMD");
    assert(test.t_intake==10);
    assert(test.c_intake==0);
    Employee emp;
    int number_of_employee;
    emp.emp_id=1;
    strcpy(emp.name,"Harshith");
    emp.salary=1000000;
    test=insert_employee(emp,test);
    emp.emp_id=2;
    strcpy(emp.name,"SUB");
    emp.salary=1200000;
    test=insert_employee(emp,test);
    //printf("%d", test.c_intake);
    display_details(test);
    assert(search_details_id(test,1)==1);
    assert(search_details_id(test,10)==0);
    Employee e2;
    e2=get_details(test,1);
    printf("%d %s %d\n",e2.emp_id,e2.name,e2.salary);
    Employee e3;
    e3=get_details(test,10);
    printf("%d %s %d",e3.emp_id,e3.name,e3.salary);
    assert(e3.emp_id==-99);
    printf("\n\n\n");

    college msis;
    msis=initialize2(10,"MSIS");
    student stu;

    //student1
    stu.regno=1;
    strcpy(stu.name,"harshith");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student2
    stu.regno=2;
    strcpy(stu.name,"harsh");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student3
    stu.regno=3;
    strcpy(stu.name,"a");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student4
    stu.regno=4;
    strcpy(stu.name,"b");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student5
    stu.regno=5;
    strcpy(stu.name,"c");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student6
    stu.regno=6;
    strcpy(stu.name,"d");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student7
    stu.regno=7;
    strcpy(stu.name,"e");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student8
    stu.regno=8;
    strcpy(stu.name,"f");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student9
    stu.regno=9;
    strcpy(stu.name,"g");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student10
    stu.regno=10;
    strcpy(stu.name,"h");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==INSERTED);

    //student11
    stu.regno=10;
    strcpy(stu.name,"failed input");
    stu.age=22;
    stu.marks=90;
    msis=insert_student_details(stu,msis);
    assert(msis.status==STUDENT_FULL);

    display_student_details(msis);
    printf("\n\n\n");


    question2 a,b,s,d,p;
    a.real=3;
    a.imaginary=2;
    b.real=1;
    b.imaginary=7;
    s=sum(a,b);
    display(s);
    printf("\n");
    d=diff(a,b);
    display(d);
    printf("\n");
    p=multiply(a,b);
    display(p);
    printf("\n\n\n");



    printf("Snake and Ladder\n");
    play_game();

    return 0;
}
