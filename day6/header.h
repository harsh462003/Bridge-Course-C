#define MAX_STUDENTS 30
#define CREATED 90
#define STUDENTFULL 99
#define INSERTED_STUDENT 98
#define STUDENT_FOUND 101
#define STUDENT_NOTFOUND 102
struct _student_
{
    int regno;
    char name[20];
    int age;
    int marks;

};
typedef struct _student_ stu;

struct _college_
{
    stu student[MAX_STUDENTS];
    int c_intake;
    int t_intake;
    char name[30];
    int status;

};
typedef struct _college_ clg;

clg initialize_details(int ,char*);
clg insert_student_details(stu ,clg);
void display_student(clg);
int search_student(clg,int);

struct _array_
{
    int *arr;
    int c_size,t_size;
};
typedef struct _array_ array;

array* initialize_array(int size);
array *deallocate(array *);
int insert_data(array *,int );
void display_arr(array *);
void search_element(array *,int ele);

