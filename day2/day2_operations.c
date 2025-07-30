#include <math.h>

int sumofdigit(const int num)
{
    int n=num;
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}

int reversenum(const int num)//question 2
{
    int n=num;
    int rev=0;
    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    return rev;
}


int countoccurance(const int num, const int tar)
{
    int n=num;
    int count=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit==tar)
            count++;
        n=n/10;
    }
    return count;
}

int checkpalindrome(const int num)
{
    int rev=reversenum(num);
    if(rev==num)
    {
        return 1;
    }
    return 0;
}

int checkprime(const int num)
{
    int n=num;
    for(int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int printprime(const int num)
{
    int c=num;
    int n=2;
    while(c>0)
    {
        if(checkprime(n)==1)
        {
            c--;
            printf("%d ",n);

        }
        n++;
    }
    return 1;
}

int sumofseries(const int n)
{
    int term=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        term=term*10+1;
        sum+=term;
        printf("%d",term);
        if (i != n - 1)
            printf(" + ");
    }
    printf("\n%d ",sum);
    return 1;
}

int int_pow(int base, int exp)
{
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int amstrong(const int num)
{
    int n=num;
    int s=(int)log10(n)+1;
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=int_pow(digit,s);
        n=n/10;
    }
    printf("\n%d\n",sum);
    if(sum==num)
        return 1;
    return 0;
}

int sum_of_divisors(int num)
{
    int sum = 0;
    for(int i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    return sum;
}

int check_amicable(const int a , const int b)
{
    int suma=sum_of_divisors(a);
    int sumb=sum_of_divisors(b);
    if (suma==b && sumb==a)
        return 1;
    return 0;
}

int volume_cube(const int a)
{
    return int_pow(a,3);
}

int volume_cuboid(const int l,const int b,const int h)
{
    return l*b*h;
}

int volume_sphere(const int r)
{
    int r3=int_pow(r,3);
    return (int)((4.0 / 3.0) * 3.14 * r3);
}

int volume_cylinder(const int r, const int h)
{
    int r2=int_pow(r,2);
    return 3.14*r2*h;
}

int volume_cone(const int r, const int h)
{
    int r2=int_pow(r,2);
    return (int)((1.0/3.0)*3.14*r2*h);
}

int electricity_bill(const int units)
{
    int bill = 0;
    int unit=units;
    if(unit <= 200)
    {
        bill = unit * 5;
    }
    else if(unit <= 300)
    {
        bill = (200 * 5) + (unit - 200) * 7;
    }
    else
    {
        bill = (200 * 5) + (100 * 7) + (unit - 300) * 10;
    }

    return bill;
}

int binary_to_decimal(const int binary)
{
    int decimal = 0, base = 1, rem;
    int b=binary;

    while(b > 0)
    {
        rem = b % 10;
        decimal += rem * base;
        base *= 2;
        b /= 10;
    }

    return decimal;
}

int decimal_to_binary(const int decimal)
{
    int binary = 0, place = 1;
    int d=decimal;

    while(d > 0)
    {
        int rem = d % 2;
        binary += rem * place;
        place *= 10;
        d /= 2;
    }

    return binary;
}


void generate_sequence(const int n)
{
    int a = 0, b = 0, c = 1, next;

    if(n >= 1) printf("%d ", a);
    if(n >= 2) printf("%d ", b);
    if(n >= 3) printf("%d ", c);

    for(int i = 4; i <= n; i++)
    {
        next = a + b + c;
        printf("%d ", next);

        // Shift the last 3 values forward
        a = b;
        b = c;
        c = next;
    }

    printf("\n");
}

void print_right_inverted_triangle(const int n)
{
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        // Print spaces
        for(int s = 0; s < i; s++)
            printf(" ");

        // Print stars
        for(int j = 0; j < n - i; j++)
            printf("* ");

        printf("\n");
    }
}

void print_triangle_single_loop(const int n)
{
    int count = 0;
    printf("\n");
    for (int i = 1; i <= n * (n + 1) / 2; i++)
    {
        printf("* ");
        count++;

        // If count reaches current row length, print newline and reset
        if (count == 1 || count == 3 || count == 6 || count == 10 || count == 15 || count == 21 || count == 28)
            printf("\n");
    }
}



