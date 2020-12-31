// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n,int res)
// {
// 	if(n==0)
// 		return res;
// 	res=res*n;
// 	// cout<<res<<" ";
// 	sum(n-1,res);
// }
// int main()
// {
// 	 // cout<<"Ans is "<<sum(5,1)<<endl;
// 	float x=50.36,ans=0;
// 	int y=16;
// 	ans=x+y;
// 	cout<<ans<<endl;
// }
#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b){
    if(a > 1 || b > 1)
        return fun(0, 0) + fun(0, 1) + fun(a-1, a-1);
    else{
        a = a + 1;
        b = b - 1;
    }
    return a + 2 - b;
}

int main(){
  // string s = "graphicaluserinterface";
  // cout<<s.size()<<endl;	
	char c = 127;
		c++;
		cout<<c<<endl; 

}