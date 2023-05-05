#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name, gender;
    int age;

public:
    Person() : name("UnKnown"), gender("UnKnown"), age(20)
    {
        cout << "Default Constructor from Class Person"
             << "\n";
    }

    Person(string n, string g, int a) : name(n), gender(g), age(a)
    {
        cout << "Parameterized Constructor from Class Person"
             << "\n";
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

    friend void print(Person p); // Don't belong to member method class Person

    friend class printClass;
};

void print(Person p)
{
    cout << "Name is : " << p.name << " Age is equal = " << p.age << "\n";
}

class printClass
{
public:
    void print(Person p)
    {
        cout << "Name is : " << p.name << " Age is equal = " << p.age << " gender is  " << p.gender << "\n";
    }
};

int main()
{
    Person p("omar", "male", 23);
    printClass p2;
    p2.print(p);
}