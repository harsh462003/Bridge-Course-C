#define INSERTED 10
#define STUDENT_FULL 99

#define WIN_POSITION 100


struct _employee_
{
    int emp_id;
    char name[20];
    int salary;
    int status;

};
typedef struct _employee_ Employee;

struct _company_
{
    Employee emp[30];
    int c_intake;
    int t_intake;
    char company_name[30];
    int status;
};
typedef struct _company_ Company;


struct _student_
{
    int regno;
    char name[30];
    int age;
    int marks;
};
typedef struct _student_ student;

struct _college_
{
    student stu[30];
    int c_intake;
    int t_intake;
    char name[30];
    int status;
};
typedef struct _college_ college;
college insert_student_details(student,college);
void display_student_details(college);//"%-10d %-20s %-10d %-10d\n" is used to display in format ref gpt
college initialize2(int , char*);
Company insert_employee(Employee,Company);
Company initialize(int total,char* name);
void display_details(Company);
int search_details_id(Company,int id);
Employee get_details(Company,int id);

struct _complex_number_
{
    float real;
    float imaginary;
};
typedef struct _complex_number_ question2;
void display(question2);
question2 sum(question2,question2);
question2 diff(question2,question2);
question2 multiply(question2, question2);


struct _game_
{
    int position;
    char name[20];
};
typedef struct _game_ player;
int roll_dice();
int check_position(int);
void printboard(player,player);
void play_game();
