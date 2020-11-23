/*#include<iostream>
    using namespace std;
int main(){
  cout<<"Hello World"<<endl;
  cout<<"Hi World";

  return 0;
}
*/
/*#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    //long int b;
    char c;
    float d;
    //double e;
    cin>>a>>c>>d;
    //cin>>d;
    //cin>>c;
    //cout<<a<<endl;
    //cout<<b<<endl;
    //cout<<c<<endl;
    //printf("%0.3f\n",d);
    //printf("%0.9lf",e);
    cout<<a<<"\n"<<c<<"\n"<<d;
    return 0;
}
*/

//#include <iostream>
//#include <cstdio>
//using namespace std;

//int main() {
    // Complete the code.

  /*  int a,b;
    cin>>a>>b;
    int i;
    for(i=a;i<=b;i=i+1)
    {
      printf("%d\n",i );
        if(i>=1||i<=9)
        {
            if(i==1)
            cout<<"one\n";
            if(i==2)
            cout<<"two\n";
            if(i==3)
            cout<<"three\n";
            if(i==4)
            cout<<"four\n";
            if(i==5)
            cout<<"five\n";
            if(i==6)
            cout<<"six\n";
            if(i==7)
            cout<<"seven\n";
            if(i==8)
            cout<<"eight\n";
            if(i==9)
            cout<<"nine\n";
        }
        if(i>9){
          printf("inside else\n" );
            if(i%2==0)
            cout<<"even\n";
            else
            cout<<"odd\n";
        }
    }
    return 0;
}
*/
/*#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
/*int max_of_four(int a,int b,int c,int d)
{
  // max=a;
   int max;
       if(a>b)
       {
           if(a>c)
           max=a;
           else
           max=c;
       }
       else
       {
           if(b>c)
           max=b;
           else
           max=c;
       }
       if(max<d)
       max=d;

       return max;
}

int main() {
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   int ans = max_of_four(a, b, c, d);
   printf("%d", ans);
  return 0;
}
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i=0,n=0,a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
    return 0;
}
