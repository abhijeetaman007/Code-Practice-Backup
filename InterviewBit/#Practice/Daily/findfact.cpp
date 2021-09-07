#include<bits/stdc++.h>
using namespace std;

int fact(int n,int res)
{
    if(n==1)
    	return res;
    res=res*n;
    return fact(n-1,res);
}

int main() {
    cout<< fact(5,1)<<endl;
}
