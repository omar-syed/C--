#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected :
        string name ;
        int empId;
        float salary;
        
    public :
        Employee():name("Unknown") , empId(100) , salary(5000.0)
        {
            
        }
        
        Employee(string n , int eI , double s):name(n) , empId(eI) , salary(s)
        {
            
        }
        
        virtual float getTotalSalary() = 0;
        
        virtual void print()
        {
            cout << "Name is : " << name << " empId equal " << empId << " Salary equal " << salary << "\n";
        }
};

class Sales:public Employee
{
    private :
        float gossSales , commissionRate;
        
    public :
        Sales(string n , int eI , double s , float gs , float cr):Employee(n , eI ,s)
        {
            gossSales = gs;
            commissionRate = cr;
        }
        
        float getTotalSalary()
        {
            cout <<"Salary : " <<  salary + (gossSales * commissionRate);
            return 0;
        }
        
        void print()
        {
            Employee::print();
            cout << "gossSales is : " << gossSales << " commissionRate equal " << commissionRate << "\n";
        }
};

int main()
{
    Employee* emp_ptr;
    Sales s1("Muhammed" , 1 , 10000 , 40000 , 0.10);
    emp_ptr = &s1;
    emp_ptr -> print();
    emp_ptr -> getTotalSalary();
}
