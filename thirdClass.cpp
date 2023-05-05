#include <iostream>
using namespace std;

class Distance
{
    private :
        int feet;
        float inches;
        
    public :
        Distance():feet(0) , inches(0.0)
        {
            
        }
        
        Distance(int f , float l):feet(f) , inches(l)
        {
            
        }
        
        void setDistance(int f , float l)
        {
            feet = f;
            inches = l;
        }
        
        void print()
        {
            cout << "Feet is : " << feet << " And Inches is : " << inches << "\n"; 
        }
        
        // add two objects || pass objects to methods
        Distance add_distance(Distance d3)
        {
            Distance result;
            result.feet   = feet + d3.feet;
            result.inches = inches + d3.inches;
            return result;
        }
        
        ~Distance()
        {
            // cout << "Good Bye !" << "\n";
        }
};
    
int main()
{
    
    Distance d1;
    d1.print();
    
    Distance d2(4 , 4.4);
    d2.print();
    
    Distance d3(d2);
    d3.print();
    
    Distance d4 = d3;
    d4.print();
    
    d4.setDistance(2 , 3.6);
    d4.print();
    
    Distance d6 =  d4.add_distance(d3);
    d6.print();
}