#include <iostream>
#include <string>
using namespace std;

class Car
{
    private :
        string maker;
        int model;
        
    public :
    
        static int carsCount;
    
        Car():maker("Kia") , model(2021)
        {
            carsCount++;   
        }
        
        // overloading Constructor that accepts input from user not initalized value
        Car(string m , int mo):maker(m) , model(mo)
        {
            carsCount++;
        }
        
        ~Car()
        {
            cout << "Good Bye!";
            carsCount--;
        }
        
        void setMaker(string m)
        {
            maker = m;
        }
        
        string getMaker()
        {
            return maker;
        }
        
        void setModel(int mo)
        {
            model = mo;
        }
        
        int getModel()
        {
            return model;
        }
};

// Initialize static member of class Car
int Car::carsCount = 0;

int main()
{
    Car car1("Kia" , 2024);
    // car1.setMaker("Toyota");
    // car1.setModel(2020);
    Car car2;
    Car car3;
 
    cout << "The Car is maked by " << car1.getMaker() << "\n";
    cout << "The Car is maked in " << car1.getModel() << "\n";
    cout << "Total objects: " << Car::carsCount << endl;
};
