// #include <iostream>  
// using namespace std;  

// // class A  
// // {  
// //     public:  
// //         A(int a)  
// //         {  
// //             cout << " " << a;  
// //         }  
// // };  

// // class B: public A  
// // {  
// //     public:  
// //         B(int a,int b):A(a)  
// //         {  
// //             cout << " " << b;  
// //         }
// // };  

// // class C: public B  
// // {  
// //     public:  
// //         C(int a,int b,int c):B(a,b)  
// //         {  
// //             cout << " " << c;  
// //         }  
// // };  

// // int main()  
// // {  
// //     C c(10,20,30);  
// //     return 0;  
// // }

// // #include<iostream>
// // using namespace std;

// // class B1    {
// //     public:
// //         B1()    {
// //             cout << "\n In class class B1 constructor";
// //         }  
// //         virtual ~B1()  {
// //             cout << "\n In B1 destructor";  
// //         }
// // };

// // class D:public B1    {
// //     public:
// //         D() {
// //             cout << "\n In derived class D's constructor";
// //         }  
// //         ~D()    {
// //             cout << "\n In derived class D's Destructor";
// //         }
// // };

// // int main()    {
// //     B1 *p = new D();  
// //     delete p;  
// //     return 0;
// // }

// class A{
// public:
//     A(){    cout<<"A";    }
//     A(int x){    cout<<x;    }
//     ~A(){    cout<<"bye";    }
// };

// int main(){
//  A obj1;
//  A obj2();
//  A obj3=5;
// }
#include <iostream>  
using namespace std;  

// class A  
// {  
//     public:  
//         A(int a)  
//         {  
//             cout << " " << a;  
//         }  
// };  

// class B: public A  
// {  
//     public:  
//         B(int a,int b):A(a)  
//         {  
//             cout << " " << b;  
//         }
// };  

// class C: public B  
// {  
//     public:  
//         C(int c,int b,int a):B(a,b)  
//         {  
//             cout << " " << c;  
//         }  
// };  

// int main()  
// {  
//     C c(10,20,30);  
//     return 0;  
// }

class abc{ 

public:

// float sub(float a, float b){ cout<<"Subtraction:"; return(a-b); }   

// int sub(int a, int b, int c){ cout<<"Subtraction:"; return(a-b-c);  }

int sub(int a, int b=0){ cout<<"Subtraction:";      return(a-b);    }

};

int main( ){

abc o;

// o.sub(20.2, 18.7);

// o.sub(19, 23, 99);

o.sub(25);

}