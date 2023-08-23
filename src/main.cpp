#include<iostream>
#include"Student.h"
#include"Module.h"
#include<vector>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
    int choice;
    while(true)
    {
        cout<<" # \t College Registeration System \t #"<<endl;
        cout<<"1> Add Student Record"<<endl;
        cout<<"2> Update Student Record"<<endl;
        cout<<"3> Get all student Record"<<endl;
        cout<<"4> Add Module Record"<<endl;
        cout<<"5> Get all module details"<<endl;
        cout<<"6> Update Module Record"<<endl;
        cout<<"0> Exit"<<endl;
        cout<<"Choose any operation: ";
        cin>>choice;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(512, '\n');
            cout<<"Not a valid input."<<endl;
            continue;
        }
        if(choice>=0 && choice <=6)
        {
            if(choice==0)
            {
                break;
            }
            if(choice ==1)
            {
                addStudentRecord();
            }
            if(choice==2)
            {
                updateStudentRecord();
            }
            if(choice==3)
            {
                displayStudentRecord();
            }
            if(choice==4)
            {
                addModuleRecord();
            }
            if(choice==6)
            {
                updateModuleRecord();
            }
            if(choice==5)       
            {
                displayModuleRecord();
            }
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
        Sleep(5000);
    }
}