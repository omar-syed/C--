#include <iostream>
using namespace std;

class Distance
{
    private :
        int feet;
        int inches;
        
    public :
        Distance():feet(0) , inches(0)
        {
            
        }
        
        Distance(int f , int i):feet(f) , inches(i)
        {
            
        }
        
       Distance operator + (Distance d2)
       {
           int f = feet + d2.feet;
           int i = inches + d2.inches;
           
           return Distance(f , i);
       }
       
       Distance operator - (Distance d2)
       {
           int f = feet - d2.feet;
           int i = inches - d2.inches;
           
           return Distance(f , i);
       }
       
       int Display()
       {
             cout << "Feet is : " << feet << " and inches equal " << inches << "\n";
       }
        
};

int main()
{
    Distance d1 (2 , 2);
    Distance d2 (4 , 3);
    Distance d3 = d1 + d2;
    cout << d3.Display() << '\n';
}
