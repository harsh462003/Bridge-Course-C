#include "day2.h"
#include <stdio.h>
#include <assert.h>


void print_numbers_with_digit_sum_9()
{
    printf("Two-digit numbers whose digits sum to 9 are:\n");
    for (int i = 10; i <= 99; i++)
    {
        int tens = i / 10;
        int units = i % 10;

        if (tens + units == 9)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
//    assert(sumofdigit(12345)==15);
//    assert(reversenum(12345)==54321);
//    assert(countoccurance(123323,3)==3);
//    assert(checkpalindrome(12321)==1);
//    assert(checkpalindrome(00101)==0);
//    //assert(printprime(15)==1);
//    assert(sumofseries(4)==1);
//    assert(amstrong(153)==1);
////    assert(check_amicable(220,284)==1);
////    int a,b=0;
//        int choice=0;
////    printf("Enter two integers: ");
////    scanf("%d %d", &a, &b);
////
////    do
////    {
////        printf("1. Sum\n");
////        printf("2. Difference\n");
////        printf("3. Product\n");
////        printf("4. Exit\n");
////        printf("Enter your choice: ");
////        scanf("%d", &choice);
////
////        switch(choice)
////        {
////            case 1:
////                printf("Sum = %d\n", a + b);
////                break;
////            case 2:
////                printf("Difference = %d\n", a - b);
////                break;
////            case 3:
////                printf("Product = %d\n", a * b);
////                break;
////            case 4:
////                printf("exiting\n");
////                break;
////            default:
////                printf("not valid\n");
////        }
////
////    } while(choice != 4);
//    int choice=0;
//    do
//    {
//        printf("1. Cube\n");
//        printf("2. Cuboid\n");
//        printf("3. Sphere\n");
//        printf("4. Cylinder\n");
//        printf("5. Cone\n");
//        printf("9. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch(choice)
//        {
//            case 1:{
//                printf("Cube:Enter the side :");
//                int a;
//                scanf("%d",&a);
//                printf("Volume:%d\n",volume_cube(a));
//                break;}
//            case 2:{
//                printf("Cuboid:Enter the lenght breadth and height :");
//                int l,h,b;
//                scanf("%d %d %d",&l,&b,&h);
//                printf("Volume:%d\n",volume_cuboid(l,b,h));
//                break;}
//            case 3:{
//                printf("Sphere:Enter the radius :");
//                int r;
//                scanf("%d",&r);
//                printf("Volume:%d\n",volume_sphere(r));
//                break;}
//            case 4:{
//                printf("Cylinder:Enter the radius and height :");
//                int r,h;
//                scanf("%d %d",&r,&h);
//                printf("Volume:%d\n",volume_cylinder(r,h));
//                break;}
//            case 5:{
//                printf("Cone:Enter the radius and height :");
//                int r,h;
//                scanf("%d %d",&r,&h);
//                printf("Volume:%d\n",volume_cone(r,h));
//                break;}
//            case 9:{
//                printf("exiting\n");
//                break;}
//            default:
//                printf("not valid\n");
//        }
//    }while(choice!=9);

//    int unit=0;
//    printf("enter the units:");
//    scanf("%d",&unit);
//    printf("Bill:%d",electricity_bill(unit));

//    int choice;
//    int num;
//    do
//    {
//        printf("\n--- MENU ---\n");
//        printf("1. Binary to Decimal\n");
//        printf("2. Decimal to Binary\n");
//        printf("3. Exit\n");
//        printf("Enter your choice: ");
//        scanf("%d", &choice);
//
//        switch(choice)
//        {
//            case 1:
//                printf("Enter a binary number: ");
//                scanf("%d", &num);
//                printf("Decimal: %d\n", binary_to_decimal(num));
//                break;
//            case 2:
//                printf("Enter a decimal number: ");
//                scanf("%d", &num);
//                printf("Binary: %d\n", decimal_to_binary(num));
//                break;
//            case 3:
//                printf("Exiting...\n");
//                break;
//            default:
//                printf("Invalid choice!\n");
//        }
//    } while(choice != 3);

//    int n;
//    printf("Enter number of terms: ");
//    scanf("%d", &n);
//
//    printf("Generated sequence:\n");
//    generate_sequence(n);

//    int n=0;
//    printf("enter the number");
//    scanf("%d",&n);
//    print_right_inverted_triangle(n);
//    print_triangle_single_loop(n);

    print_numbers_with_digit_sum_9();

}
