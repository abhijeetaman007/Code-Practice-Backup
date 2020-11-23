 #include <iostream>
using namespace std;
    void ptr(int*);
    int main()
    {
        int t = 10;
        ptr((&t)++);
    }
    void ptr(int *p)
    {
        cout<<*p;
    }