#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x, long long int y) 
{ 
	long long int res = 1; 

	while (y > 0) 
	{ 
		if (y & 1) 
			res = res*x; 

		y = y>>1;  
		x = x*x;  
	} 
	return res; 
}


int main(){
	int x=2;
	int y=31;
	cout<<power(x,y);
}