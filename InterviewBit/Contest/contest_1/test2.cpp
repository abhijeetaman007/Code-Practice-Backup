#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=2;
	int b=11;
	int c=0;
    for(int i=0;i<=b;i++)
    {
        int n=i;
        int sum=0;
        while(n!=0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        cout<<"num is "<<i<<endl;
        cout<<"sum is "<<sum<<endl;
        cout<<"exor is "<<(int)(a^sum)<<endl;
        if((a^sum)>=a)
        {
            c=c+1;
        }
    }
    cout<<"ans is "<<c<<endl;
}