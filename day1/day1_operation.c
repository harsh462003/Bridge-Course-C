#include "day1.h"
#include <string.h>
#include<stdlib.h>

int add(const int x,const int y) //return sum of 2 input parameters
{
    return x+y;
}
int sub(const int x, const int y)
{
    return x-y;
}
int is_even(const int input)// return True or False
{
    return !(input%2);
}

int reverse_number(const int num)
{
    int n=num;
    int rev=0;

    while(n>0)
    {
        int digit=n-(n/10)*10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}

char convertchar(char ch)
{
     if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;  // ASCII trick
    }
    return ch;
}

void convert_string(char* str)
{
    int i=0;
    while(str[i]!='\0')
    {
        str[i]=convertchar(str[i]);
        i++;
    }
}

float area_of_circle(const int r )
{
    return 3.14*r*r;
}

int find_number_chara(char x,char y)
{
    int n=x;
    int m=y;
    return abs(m-n)-1;
}

float ctof(int n)
{
    return (n*9.0f/5.0f)+32.0f;
}

int check_leap(const int year)
{
    if ((year%4==0 && year%100!=0) || year%400==0)
    {
        return 1;
    }
    else
        return 0;
}

int power_n(const int n)
{
    return 1<<n;
}

int check_num_char(char s)
{
    return (s >= '0' && s <= '9') ? 1 : 0;
}

int random_sum()
{
    int n=rand();
    int m=rand();
    return add(n,m);
}
