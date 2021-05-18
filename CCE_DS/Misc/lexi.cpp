// C++ program to find the K-th 
// lexicographical string of length N 
#include <bits/stdc++.h> 
using namespace std; 

string find_kth_String_of_n(int n, int k) 
{ 
	
	// Initialize the array to store 
	// the base 26 representation of 
	// K with all zeroes, that is, 
	// the initial String consists 
	// of N a's 
	int d[n] = {0}; 

	// Start filling all the 
	// N slots for the base 26 
	// representation of K 
	for(int i = n - 1; i > -1; i--) 
	{ 
		
	// Store the remainder 
	d[i] = k % 26; 
		
	// Reduce K 
	k /= 26; 
	} 
	
	// If K is greater than the 
	// possible number of strings 
	// that can be represented by 
	// a string of length N 
	if (k > 0) 
		return "-1"; 

	string s = ""; 
	
	// Store the Kth lexicographical 
	// string 
	for(int i = 0; i < n; i++) 
	s += (d[i] + ('a')); 

	return s; 
} 

// Driver Code 
int main() 
{ 
	int n = 3; 
	int k = 10; 
	
	// Reducing k value by 1 because 
	// our stored value starts from 0 
	k -= 1; 
	
	cout << find_kth_String_of_n(n, k); 
	return 0; 
} 

// This code is contributed by 29AjayKumar 
