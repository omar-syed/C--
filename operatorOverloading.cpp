#include <iostream>
using namespace std;

class Counter
{
    private :
        unsigned int count;
        
    public :
        Counter():count(0)
        {
            
        }
        
        Counter(int c):count(c)
        {
            
        }
        
        int getCount()
        {
            return count;
        }
        
        Counter operator ++ ()
        {
            ++count;
            return Counter(count);
        }
        
        Counter operator ++ (int)
        {
            count++;
            return Counter(count);
        }
        
        Counter operator --()
        {
            --count;
            return Counter(count);
        }
      
        
};

int main()
{
    Counter c1(9);
    Counter c2 = --c1;
    cout << c1.getCount() << '\n';
}
