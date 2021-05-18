#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int count=0;
    int max=-1;
    for(int i=a;i<=b;i++)
    {
      int c=0;
        for(int j=1;j<=sqrt(i);j++)
        {
          if(i%j==0)
        {
          if((i/j)==j)
           c=c+1;
          else
          c=c+2;
        }
    }
	if(max<c)
	{
		max=c;
		count=0;
	}
	if(max==c){
	count=count+1;
	}

  }
	  cout<<count+1<<endl;
    }
}
