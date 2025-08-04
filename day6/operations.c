#include"header.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
clg initialize_details(int t,char* n)
{
    clg c;
    c.t_intake=t;
    c.c_intake=0;
    strcpy(c.name,n);
    c.status=CREATED;
    return c;
}

clg insert_student_details(stu s ,clg c)
{
    if(c.c_intake==c.t_intake)
    {
        c.status=STUDENTFULL;
        return c;
    }
    c.student[c.c_intake].regno=s.regno;
    strcpy(c.student[c.c_intake].name,s.name);
    c.student[c.c_intake].age=s.age;
    c.student[c.c_intake].marks=s.marks;
    c.status=INSERTED_STUDENT;
    c.c_intake++;
    return c;
}
void display_student(clg c)
{
    for(int i=0;i<c.c_intake;i++)
    {
        printf("\n%d  %s  %d  %d\n",c.student[i].regno,c.student[i].name,c.student[i].age,c.student[i].marks);
    }
}

int search_student(clg c, int id)
{
    for ( int  i= 0; i <c.c_intake ; i++)
    {
        if(id==c.student[i].regno)
        {
            printf("\nSTUDENT FOUND %d  %s  %d  %d\n",c.student[i].regno,c.student[i].name,c.student[i].age,c.student[i].marks);
            return STUDENT_FOUND;
        }
    }
    printf("\n STUDENT NOT FOUND\n");
    return STUDENT_NOTFOUND;
    
}





array* initialize_array(int size)
{
    array *myarr;
    myarr=(array*)malloc(sizeof(array));
    if(NULL==myarr)
    {
        return NULL;
    }
    myarr->c_size=0;
    myarr->t_size=size;
    myarr->arr=(int *)malloc(sizeof(int)*size);
    if(myarr->arr==NULL)
    {
        free(myarr);
        return NULL;
    }
    return myarr;
}


int insert_data(array *myarr,int data)
{
    if(myarr->arr==NULL)
    {
        return -1;
    }
    else if(myarr->c_size>myarr->t_size)
    {
        return -1;
    }
    *(myarr->arr + myarr->c_size)=data;
    myarr->c_size++;
    return 1;

}

void display_arr(array *myarr)
{
    for(int i=0;i<myarr->c_size;i++)
    {
        printf("%d   ",myarr->arr[i]);
    }
    printf("\n");

}

void search_element(array *myarr,int ele)
{
    for (int i = 0; i < myarr->c_size; i++)
    {
        if(ele==myarr->arr[i])
        {
            printf("element found at index %d",i);
        }
    }
    
}

array* deallocate(array *myarr)
{
    if(myarr==NULL)
    {
        return NULL;
    }
    free(myarr->arr);
    free(myarr);
    return NULL;
}