#include <stdio.h>
#include <string.h>
#include "day5.h"


Company initialize(int total,char* name)
{

    Company amd;
    amd.c_intake=0;
    amd.t_intake=total;
    amd.status=9;
    strcpy(amd.company_name,name);
    return amd;
}


Company insert_employee(Employee emp,Company cmp)
{
    if(cmp.c_intake==cmp.t_intake)
    {
        cmp.status=-1;
        return cmp;
    }
    cmp.emp[cmp.c_intake].emp_id=emp.emp_id;
    strcpy(cmp.emp[cmp.c_intake].name,emp.name);
    cmp.emp[cmp.c_intake].salary=emp.salary;
    cmp.c_intake++;
    cmp.status=1;
    return cmp;
}
void display_details(Company cmp)
{

    for(int i =0;i<cmp.c_intake;i++)
    {
            printf("%d   %s    %d\n",cmp.emp[i].emp_id,cmp.emp[i].name,cmp.emp[i].salary);
    }
}


int search_details_id(Company cmp, int id)
{
    for(int i =0;i<cmp.c_intake;i++)
    {
        if(cmp.emp[i].emp_id==id)
        {
            return 1;
        }
    }
    return 0;
}

Employee get_details(Company cmp,int id)
{
    Employee emp;
    strcpy(emp.name,"Failed");
    emp.emp_id=-99;
    emp.salary=-99;
    for(int i=0;i<cmp.c_intake;i++)
    {
        if(cmp.emp[i].emp_id==id)
        {
            cmp.emp[i].status=1;
            return cmp.emp[i];
        }
    }
    return emp;
}



college initialize2(int t, char* name)
{
    college clg;
    clg.t_intake=t;
    strcpy(clg.name,name);
    clg.c_intake=0;
    return clg;
}

college insert_student_details(student stu,college clg)
{
    if(clg.c_intake==clg.t_intake)
    {
        clg.status=STUDENT_FULL;
        return clg;
    }
    clg.stu[clg.c_intake].regno=stu.regno;
    strcpy(clg.stu[clg.c_intake].name,stu.name);
    clg.stu[clg.c_intake].age=stu.age;
    clg.stu[clg.c_intake].marks=stu.marks;
    clg.c_intake++;
    clg.status=INSERTED;
    return clg;
}

void display_student_details(college clg)
{
    for (int i=0;i<clg.c_intake;i++)
    {
        printf("%-10d %-20s %-10d %-10d\n",clg.stu[i].regno,clg.stu[i].name,clg.stu[i].age,clg.stu[i].marks);
    }
}

question2 sum(question2 a,question2 b)
{
    question2 result;
    result.imaginary=a.imaginary+b.imaginary;
    result.real=a.real+b.real;
    return result;
}

question2 diff(question2 a,question2 b)
{
    question2 result;
    result.imaginary=a.imaginary-b.imaginary;
    result.real=a.real-b.real;
    return result;
}

question2 multiply(question2 a, question2 b)
{
    question2 result;
    result.real = a.real * b.real - a.imaginary * b.imaginary;
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return result;
}

void display(question2 q)
{
    if(q.imaginary>=0)
    {
        printf("%.2f + %.2fi\n", q.real, q.imaginary);
    }
    else
        printf("%.2f - %.2fi\n", q.real, -q.imaginary);
}






int roll_dice()
{
    return (rand() % 6) + 1;
}

int check_position(int pos)//random board structure , ladders and snakes
{

    if (pos == 3) return 22;
    if (pos == 5) return 8;
    if (pos == 11) return 26;
    if (pos == 20) return 29;
    if (pos == 27) return 56;
    if (pos == 50) return 91;


    if (pos == 17) return 4;
    if (pos == 19) return 7;
    if (pos == 21) return 9;
    if (pos == 43) return 38;
    if (pos == 62) return 18;
    if (pos == 70) return 50;
    if (pos == 87) return 24;

    return pos;
}
//used gpt to get the board structure
void print_board(player p1, player p2) {
    printf("\n--- BOARD ---\n");

    for (int row = 9; row >= 0; row--) {
        if (row % 2 == 0) {
            for (int col = 0; col < 10; col++) {
                int cell = row * 10 + col + 1;
                if (cell == p1.position && cell == p2.position)
                    printf("[B] ");
                else if (cell == p1.position)
                    printf("[P1] ");
                else if (cell == p2.position)
                    printf("[P2] ");
                else
                    printf("[%2d] ", cell);
            }
        } else {
            // Right to left for odd rows
            for (int col = 9; col >= 0; col--) {
                int cell = row * 10 + col + 1;
                if (cell == p1.position && cell == p2.position)
                    printf("[B] ");
                else if (cell == p1.position)
                    printf("[1] ");
                else if (cell == p2.position)
                    printf("[2] ");
                else
                    printf("[%2d] ", cell);
            }
        }
        printf("\n");
    }

    printf("\n");
}

void play_game()
{
    player player1,player2;
    strcpy(player1.name,"You");
    player1.position=1;
    strcpy(player2.name,"Computer");
    player2.position=2;

    int dice;
    srand(time(NULL));


    while (player1.position < WIN_POSITION && player2.position < WIN_POSITION) {
        // Player 1 turn
        printf("\n%s, press any key to roll the dice...", player1.name);
        getch();
        dice = roll_dice();
        printf("You rolled a %d\n", dice);
        player1.position += dice;
        if (player1.position > WIN_POSITION) player1.position -= dice;
        player1.position = check_position(player1.position);

        if (player1.position == WIN_POSITION) {
            printf("\n %s wons!\n", player1.name);
            break;
        }

        // Player 2 turn
        printf("\n%s is rolling...\n", player2.name);
        dice = roll_dice();
        printf("Computer rolled a %d\n", dice);
        player2.position += dice;
        if (player2.position > WIN_POSITION) player2.position -= dice;
        player2.position = check_position(player2.position);

        if (player2.position == WIN_POSITION) {
            printf("\n %s wins!\n", player2.name);
            break;
        }

        printf("%s is at position %d\n", player1.name, player1.position);
        printf("%s is at position %d\n", player2.name, player2.position);
        print_board(player1, player2);
    }
}
