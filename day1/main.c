#include<assert.h>
#include "day1.h"
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    //test for add 2 numbers

//    assert(add(10,20) == 30);
//    assert(add(5,10) == add(12,3));
//    assert(add(-5, -6) == -11);
//
//    //test for Subtracting two unsigned numbers
//    assert(sub(20,10) == 10);
//    assert(sub(10,10) == 0);
//    assert(sub(5,10) == -5);
//    assert(sub(-20,10) == -30);
//
//    //check whether input is even
//    assert(is_even(10) == 1);
//    assert(is_even(7) == 0);
//    assert(is_even(46) == 1);
//    assert(is_even(17) == 0);
//
//
//    assert(reverse_number(1234) == 4321);
//    assert(reverse_number(560) == 65);
//    assert(reverse_number(7000) == 7);
//
//
//    assert(convertchar('A')=='a');
//    assert(convertchar('a')=='a');
//    assert(convertchar('a')=='A');

//
//    char word1[] = "ABC";
//    convert_string(word1);
//    assert(strcmp(word1, "abcd") == 0);


//    assert(fabs(area_of_circle(1.0f) - 3.14f) < 0.001);
//    assert(fabs(area_of_circle(2.0f) - 12.56f) < 0.001);

//    assert(find_number_chara('A', 'E') == 3);
//    assert(find_number_chara('E', 'A') == 3);
//    assert(find_number_chara('a', 'd') == 2);
//    assert(find_number_chara('Z', 'Z') == -1);


//    assert(fabs(ctof(0) - 32.0f) < 0.001);       // 0°C = 32°F
//    assert(fabs(ctof(100) - 212.0f) < 0.001);    // 100°C = 212°F
//    assert(fabs(ctof(-40) - (-40.0f)) < 0.001);  // -40°C = -40°F
//    assert(fabs(ctof(37) - 98.6f) < 0.001);      // 37°C = 98.6°F

//    assert(check_leap(2024) == 1);   // leap
//    assert(check_leap(2023) == 0);   // not leap
//    assert(check_leap(1900) == 0);   // not leap
//    assert(check_leap(2000) == 1);   // leap

//    assert(power_n(0) == 1);      // 2^0 = 1
//    assert(power_n(1) == 2);      // 2^1 = 2
//    assert(power_n(2) == 4);      // 2^2 = 4
//    assert(power_n(3) == 8);      // 2^3 = 8
//    assert(power_n(4) == 16);     // 2^4 = 16
//    assert(power_n(5) == 32);     // 2^5 = 32
//    assert(power_n(6) == 64);     // 2^6 = 64
//    assert(power_n(10) == 1024);  // 2^10 = 1024

//
//    assert(check_num_char('5') == 1);
//    assert(check_num_char('0') == 1);
//    assert(check_num_char('9') == 1);
//
//    assert(check_num_char('A') == 0);
//    assert(check_num_char('z') == 0);
//    assert(check_num_char('#') == 0);
//    assert(check_num_char(' ') == 0);

    printf("Random sum = %d\n",random_sum());



    return 0;
}
