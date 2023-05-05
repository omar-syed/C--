#include <iostream>
#include <string>
using namespace std;

struct employee 
{
    int empNo;
    string empName;
    string job;
    float salary;
    float bonus;
    float totalSalary;
};

void getData(employee [] , int size);
void print(employee [] , int size);

int main()
{
    employee emp [2]; 
    getData(emp , 2);
    print(emp , 2);
}

void getData(employee emp[] , int size)
{
      for(int i = 0 ; i < size; i++)
      {
          cout << "Enter empNo , empName , job for employee " << i + 1 << "\n";
          cin  >> emp[i].empNo >> emp[i].empName >> emp[i].job;
          cout << "\n";
          
          if(emp[i].job == "manager")
          {
              emp[i].salary = 5000;
              emp[i].bonus  = emp[i].salary * 0.10;
          }
          
          else if(emp[i].job == "engineer")
          {
              emp[i].salary = 3000;
              emp[i].bonus  = emp[i].salary * 0.5;
          }
          
          else if(emp[i].job == "clerk")
          {
              emp[i].salary = 2000;
              emp[i].bonus  = emp[i].salary * 0.3;
          }
          
          else
          {
              emp[i].salary = 1000;
              emp[i].bonus  = emp[i].salary * 0.1;
          }
      }
}

void print(employee emp [] , int size)
{
     for(int i = 0; i < size; i++)
      {
        cout << "emp Number = "   << emp[i].empNo << "\n";
        cout << "emp Name = "     << emp[i].empName << "\n";
        cout << "emp Job = "      << emp[i].job << "\n";
        cout << "emp salary = "   << emp[i].salary << "\n";
        cout << "emp bonus = "    << emp[i].bonus << "\n";
        cout << "total Salary = " << emp[i].salary + emp[i].bonus << "\n";
        cout <<"----------------------------------------------------" << "\n";
      }
}