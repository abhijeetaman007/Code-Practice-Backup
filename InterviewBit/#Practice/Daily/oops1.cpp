#include <iostream>
using namespace std;

class MyClass
{
    private:
        int num;
    public:
        MyClass(int _num)
        {
            cout<<"inside"<<endl;
            num = _num;
            cout << num;
        }
};

int main()
{
    MyClass m(1);
    m = 0;
    return 0;
}