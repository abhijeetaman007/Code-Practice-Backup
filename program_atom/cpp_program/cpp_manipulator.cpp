// //Manipulator
// setw()-->to print from right to left
// cout<<setw(5)<<"1\n"
// cout<<setfill()<<
// setprecision()
// cout<<setbase(8)<<65  -- 101
// cout<<setbase(16)<<65 -- 41
// cout<<setbase(10)<<0101--65
// 				  |			
// 				  ^
// 				  octal
// cout<<setbase(10)<<0x41 ---65


#include <iomanip> 
#include <iostream> 
using namespace std; 

// int main() 
// { 
// 	double A = 100.345; 
// 	double B = 2001.5251; 
// 	double C = 201455.2646; 

// 	// We can use setbase(16) here instead of hex 

// 	// formatting 
// 	cout << hex << showbase << left<< nouppercase; 

// 	// actual printed part 
// 	cout << (long long)A << endl; 

// 	// We can use dec here instead of setbase(10) 

// 	// formatting 
// 	cout << setbase(10) << right << setw(15) 
// 		<< setfill('_') << showpos 
// 		<< fixed << setprecision(2);  //fixed means scientifoc notation is not used  

// 	// actual printed part 
// 	cout << B << endl; 

// 	// formatting 
// 	cout << scientific << uppercase 
// 		<< noshowpos << setprecision(9); 

// 	// actual printed part 
// 	cout << C << endl; 
// } 
int main()
{
	double A = 100.345; 
	double B = 2001.5251; 
	double C = 201455.2646;
	cout<<setbase(16)<<showbase<<left<<nouppercase;
    cout<<(long long)A<<endl;
    cout<<setw(15)<<right<<setfill('_')<<showpos<<fixed<<setprecision(2);
    cout<<B<<endl;
    cout<<scientific<<uppercase<<setprecision(9)<<noshowpos;
    cout<<C<<endl;
}
