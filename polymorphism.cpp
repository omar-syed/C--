#include <iostream>
#include <string>
using namespace std;

class Shape
{
    private :
        string color;
        
    public :
    
        Shape(string c):color(c)
        {
            
        }
        
        
        virtual int area() = 0;
        
        virtual void draw() = 0;
        
        virtual void erase() = 0;
        
        virtual void dispaly() final // can't override this method in derived class
        {
            cout << "Display from shape class " << "\n";
        }
};

class Rectangle : public Shape
{
    private :
        int length;
        int width;
        
    public :
        Rectangle(int l , int w , string c):Shape(c)
        {
            length = l;
            width  = w;
        }
        
        int area()
        {
            cout << "Rectangle class area equal " << width * length << "\n";
            return width * length;
        }
        
        void draw()
        {
            cout << "Draw Derived class " << "\n";
        }
        
        void erase()
        {
            cout << "Erase Derived class " << "\n";
        }
};

int main()
{
    // Shape s; can't take object from class Shape
    Shape* shape;
    Rectangle rec(10 , 10 , "White");
    shape = &rec;
    shape -> area();
}