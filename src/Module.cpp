#include<iostream>
#include<vector>
#include<string>
#include"Module.h"
using namespace std;

// int moduleNo, fees;
//     string moduleName, duration;
void addModuleRecord()
{
    Module m;
    
    cout<<"Enter module number: ";
    cin>>m.moduleNo;
    int flag = 0;
    for(int i = 0; i<mod.size(); i++)
    {
        if(m.moduleNo == mod[i].moduleNo)
        {
            cout<<"Module number is taken please select other Module number"<<endl;
            flag=1;
            break;
        }
    }
    if(flag) {
        addModuleRecord();
        return;
    }
    cout<<"Enter module name: ";
    cin>>m.moduleName;

    cout<<"Enter fees: ";
    cin>>m.fees;

    cout<<"Enter duration: ";
    cin>>m.duration;

    mod.push_back(m);
}

void updateModuleRecord()
{
    int modNo;
    cout<<"Enter the module number of the module to be updated: ";
    cin>>modNo;
    for(int i =0; i<mod.size(); i++)
    {
        Module mo;
        if(modNo == mod[i].moduleNo)
        {
            cout<<"Current details: "<<endl;
            cout<<"Module name: "<<mod[i].moduleName<<"\t Duration: "<<mod[i].duration<<"\t Fees: "<<mod[i].fees;

            cout<<"Update module name: ";
            cin>>mo.moduleName;
            mod[i].moduleName = mo.moduleName;

            cout<<"Update module duration: ";
            cin>>mo.duration;
            mod[i].duration = mo.duration;

            cout<<"Update module fees: ";
            cin>>mo.fees;
            mod[i].fees = mo.fees;

            cout<<"Data updated!"<<endl;
        }
        else
        {
            cout<<"Module number not found"<<endl;
        }
    }
}

void displayModuleRecord()
{
    if(mod.size()==0)
    {
        cout<<"No data in the database"<<endl;
    }
    for(int i =0; i<mod.size(); i++)
    {
        cout<<(i+1)<<" --> Name: "<<mod[i].moduleName<<"\nModule number: "<<mod[i].moduleNo<<"\n Duration: "<<mod[i].duration<<"\n Fees: "<<mod[i].fees<<endl;
    }
}