#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
    public:
    int admNo;
    string name, dob, address, gender, email;
};
static vector<Student> stu;
void addStudentRecord();
void updateStudentRecord();
void displayStudentRecord();