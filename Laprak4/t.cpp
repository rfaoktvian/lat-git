#include<iostream>

using namespace std;

struct human{
    string name[3] = {"Rafa", "AKu", "YA"};
    char gender;
    float age = 2.25;
    string address;
    string phone = "jadbajdba";
};

struct student{
    human people;
    string student_id[2] = {"Jacob", "Rara"};
    string major;
    string in_class;
    int semester;
    float gpa = 1.5;
};

struct employee{
    student pupil;
    string employee_id;
    string division ="YA";
    string position[2];
    int salary[3];
};

struct customers{
    employee worker;
    string customers_id;
    bool is_member;
    int debt;
};

struct lecturer{
    human teacher;
    string teacher_id;
    string course[3];
    int salary;
    bool is_practicum_lecturer;
};

int main(){
    human adler;
    student watson;
    employee moriarty;
    customers hudson;
    lecturer holmes;

    cout<<holmes.teacher<<endl;
    return 0;
}