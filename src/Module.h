#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Module
{
    public:
    int moduleNo, fees;
    string moduleName, duration;
};
static vector<Module> mod;
void addModuleRecord();
void updateModuleRecord();
void displayModuleRecord();