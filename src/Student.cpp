#include<iostream>
#include"Student.h"
using namespace std;
void addStudentRecord()
{
    Student s;

    int flag=0;
    cout<<"Enter admission number: ";
    cin>>s.admNo;
    
    for(int i = 0; i<stu.size(); i++)
    {
        if(s.admNo == stu[i].admNo)
        {
            cout<<"Admission number is taken please select other admission number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag) {
        addStudentRecord();
        return;
    }
    cout<<"Enter student name: ";
    cin.ignore();
    getline(cin, s.name);

    cout<<"Enter Gender: ";
    getline(cin, s.gender);

    cout<<"Enter email id: ";
    getline(cin, s.email);

    cout<<"Enter date of birth: ";
    getline(cin, s.dob);

    cout<<"Enter address: ";
    getline(cin, s.address);

    stu.push_back(s);
}

void updateStudentRecord()
{
    cout<<"Enter the admission number of the student whose record is to be updated: ";
    int up;
    cin>>up;
    for(int i = 0; i<stu.size(); i++)
    {
        Student upd;
        if(up == stu[i].admNo)
        {
            cout<<"Current details: "<<endl;
            cout<<"Name: "<<stu[i].name<<"\n Gender: "<<stu[i].gender<<"\n date of birth: "<<stu[i].dob<<"\nEmail id: "<<stu[i].email<<"\nAddress: "<<stu[i].address;
            
            cout<<"Update Email: ";
            cin>>upd.email;
            stu[i].email = upd.email;

            cout<<"Update address: ";
            cin>>upd.address;
            stu[i].address = upd.address;

            cout<<"Data updated!"<<endl;;
        }
        else
        {
            cout<<"Admission number not found"<<endl;
        }
    }
}

void displayStudentRecord()
{
    if(stu.size()==0)
    {
        cout<<"No data in the database"<<endl;
    }
    for(int i =0; i<stu.size(); i++)
    {
        cout<<(i+1)<<" --> Name: "<<stu[i].name<<"\n Admission number: "<<stu[i].admNo<<"\n Email id: "<<stu[i].email<<"\n Date of birth: "<<stu[i].dob<<"\n Gender: "<<stu[i].gender<<"\n Address: "<<stu[i].address<<endl;
    }
}