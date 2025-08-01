#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "day3.h"

int main()
{
    // Test swap_two_numbers
    int a = 5, b = 10;
    swap_two_numbers(&a, &b);
    assert(a == 10 && b == 5);

    // Test find_max_min
    int temp[10] = {11, 2222, 3, 4, 5, 6, 7, 8, 9, 1};
    int max, min;
    assert(find_max_min(temp, 10, &max, &min) == 1);
    assert(max == 2222 && min == 1);

    // Test insert_data — simulate known unique values
    int arr[5] = {0};
    // Directly assign known unique values to test checkifexist logic
    for (int i = 0; i < 5; i++) arr[i] = i * 10;
    for (int i = 0; i < 5; i++) {
        assert(checkifexist(arr, 5, i * 10) == 1);
    }
    assert(checkifexist(arr, 5, 1234) == 0);  // Non-existent value

    // Test linear_search
    int larr[] = {5, 10, 15, 20};
    assert(linear_search(larr, 4, 15) == 2);
    assert(linear_search(larr, 4, 99) == -1);

    // Test binarysearch (must be sorted!)
    int barr[] = {1, 3, 5, 7, 9, 11};
    assert(binarysearch(barr, 6, 7) == 3);
    assert(binarysearch(barr, 6, 2) == -1);

    int test1[20]; // Expected: 122
    assert(productofconsecutive(test1, 7) == 122);

    int choice;
    double x, n;

    do {
        printf("\nMath Menu\n");
        printf("1. Square Root\n");
        printf("2. Natural Log (ln x)\n");
        printf("3. Log base 10 (log10 x)\n");
        printf("4. Power (x^n)\n");
        printf("5. Cos(x in radians)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("%.2lf = %.4lf\n", x, sqrt(x));
                break;

            case 2:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("ln(%.2lf) = %.4lf\n", x, log(x));
                break;

            case 3:
                printf("Enter number: ");
                scanf("%lf", &x);
                printf("log10(%.2lf) = %.4lf\n", x, log10(x));
                break;

            case 4:
                printf("Enter base (x): ");
                scanf("%lf", &x);
                printf("Enter exponent (n): ");
                scanf("%lf", &n);
                printf("%.2lf ^ %.2lf = %.4lf\n", x, n, pow(x, n));
                break;

            case 5:
                printf("Enter angle x (in radians): ");
                scanf("%lf", &x);
                printf("cos(%.2lf) = %.4lf\n", x, cos(x));
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);


    return 0;
}
