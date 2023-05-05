#include <iostream>
#include <string>
using namespace std;

class Person
{
    private :
        string name , gender;
        int age;
        
    public :
    
        Person():name("UnKnown") , gender("UnKnown") , age(20)
        {
            cout << "Default Constructor from Class Person" << "\n";
        }
        
        Person(string  n , string g , int a):name(n) , gender(g) , age(a)
        {
            cout << "Parameterized Constructor from Class Person" << "\n";   
        }
        
        void setName(string n)
        {
            name = n;
        }
        
        string getName()
        {
            return name;
        }
        
        void setGender(string g)
        {
            gender = g;
        }
        
        string getGender()
        {
            return gender;
        }
        
        void setAge(int a)
        {
            age = a;
        }
        
        int getAge()
        {
            return age;
        }
        
        void Dispaly()
        {
            cout << "Name is : " << name << " , Gender equal " << gender << " and Age equal " << age << "\n";
        }
};

class Student : public Person
{
    private :
        int Level;
        float GBA;
        string Depart;
        
    public :
    
         Student():Level(4) , GBA(3.5) , Depart("CS")
         {
            cout << "Default Constructor from Class Student" << "\n";
         }
        
        Student(string  n , string g , int a , int l , float gp , string d):Person(n , g , l)
        {
            Level  = l;
            GBA    = gp;
            Depart = d;
        }
    
        void setLevel(int l)
        {
            Level = l;
        }
        
        int getLevel()
        {
            return Level;
        }
        
        void setGBA(float gp)
        {
            GBA = gp;
        }
        
        float getGBA()
        {
            return GBA;
        }
        
        void setDepart(string d)
        {
            Depart = d;
        }
        
        string getDepart()
        {
            return Depart;
        }
        
        void Dispaly()
        {
            Person::Dispaly();
            cout << "Level is : " << Level << " , GBA equal " << GBA << " and Depart equal " << Depart << "\n";
        }
};

class postGraduatedStudent: public Student
{
    private :
        string research_interest ;
        
    public :
        postGraduatedStudent(string  n , string g , int a , int l , float gp , string d , string ri):Student(n , g , a , l , gp , d)
        {
            research_interest = ri;
        }
        
        void set_research_interest(string ri)
        {
            research_interest = ri;
        }
        
        string get_research_interest()
        {
            return research_interest;
        }
        
        void Dispaly()
        {
            Student::Dispaly();
            cout << "Research Interest in : " << research_interest << "\n";
        }
};

int main()
{
    Person p1("Mo" , "male" , 22);
    p1.Dispaly();
    
    postGraduatedStudent s1("Mo" , "male" , 22 , 4 , 3.5 , "CS" , "Agile");
    s1.Dispaly();
}