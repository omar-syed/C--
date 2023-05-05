#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
    private:
    
        float length;
        float width;
        
    public :
    
        static int count;
    
        Rectangle():length(0) , width(0)
        {
            count++;
        }
        
        // overloading Constructor that accepts input from user not initalized value
        Rectangle(float l , float w):length(l) , width(w)
        {
            count++;
        }
        
        ~Rectangle()
        {
            cout << "Good Bye!";
            count--;
        }
        
        void setLength(float l)
        {
            length = l;
        }
        
        float getLength()
        {
            return length;
        }
        
        void setWidth(float w)
        {
            width = w;
        }
        
        float getWidth()
        {
            return width;
        }
        
        float getArea()
        {
            return length * width;
        }
        
        static int getCount()
        {
            return count;
        }
};

int Rectangle::count = 0;

int main()
{
    Rectangle r1(4.4 , 5.5);
    Rectangle r2;
    Rectangle r3;
    r2.setLength(5.4);
    r2.setWidth(4.2);
    
    cout << "The length of Rectangle r2 is : " << r2.getLength() << "\n";
    cout << "The width of Rectangle r2 is  : " << r2.getWidth() << "\n";
    cout << "The area of Rectangle r1 is  : " << r2.getArea() << "\n";
    cout << "Total objects: " << Rectangle::count << endl;
    cout << "Total objects: " << Rectangle::getCount() << endl;
    

};
