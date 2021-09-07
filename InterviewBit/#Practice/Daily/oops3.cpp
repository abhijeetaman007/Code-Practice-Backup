#include <iostream>  
using namespace std;  
class Baseclass1
{  
    public:  
        Baseclass1()  
        {
            cout << "Baseclass1's constructor called" << endl;
        }  
        ~Baseclass1()
        {
            cout << " Baseclass1's destructor" << endl;
        }  
};

class Baseclass2
{  
    public:  
        Baseclass2()  
        {
            cout << "Baseclass2's constructor called" << endl;
        }
        ~Baseclass2()
        {
            cout << " Baseclass2's destructor" << endl;
        }
};  

class Derived: public Baseclass1, public Baseclass2
{  
    public:
        Derived()  
        {
            cout << "Derived's constructor called" << endl;
        }  
        ~Derived()
        {
            cout << " Derived's destructor" << endl;
        }
};

int main()  
{  
    Derived d;
    return 0;
}