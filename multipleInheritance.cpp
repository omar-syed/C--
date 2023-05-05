#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private :
        string name , job;
        float salary;
        
    public :
        Employee():name("Unknown") , job("Unknown") , salary(0.0)
        {
            
        }
        
        Employee(string n , string j , float s):name(n) , job(j) , salary(s)
        {
            
        }
        
        void setName(string n)
        {
            name = n;
        }
        
        string getName()
        {
            return name;
        }
        
        void setSalary(float s)
        {
            salary = s;
        }
        
        float getSalary()
        {
            return salary;
        }
        
        void Display()
        {
            cout << "Name is : " << name << " Salary equal " << salary << "\n";
        }
};

class Student
{
    private :
        string name , department , research_interest;
        
    public :
    
        Student(string depart , string ri):department(depart) , research_interest(ri)
        {
            
        }
        
        void setName(string na)
        {
            name = na;
        }
        
        string getName()
        {
            return name;
        }
        
        void setDepart(string d)
        {
            department = d;
        }
        
        string getDepart()
        {
            return department;
        }
        
        
        void Display()
        {
            cout << "department is : " << department << "\n";
        }
};

class TeachingAssistant : public Employee , public Student
{
    public :
        TeachingAssistant(string n , string j , float s , string depart , string ri):Employee(n , j , s) , Student(depart , ri)
        {
            
        }
        
        void Display()
        {
            Employee :: Display();
            Student  :: Display();
        }
};

int main()
{
    TeachingAssistant ta("Adam" , "Developer" , 5000.0 , "CS" , "Agile");
    ta.Display();
    ta.Employee::setName("Mo");
}
