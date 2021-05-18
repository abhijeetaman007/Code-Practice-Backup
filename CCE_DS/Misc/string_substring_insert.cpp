#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
char a[10];
char b[4];
char c[10];
int pos,len_a,len_b,t=0, i=0,p;
int x,tot_size,o;
cout<<"Enter First String:";
cin>>a;
cout<<"Enter Second String:";
cin>>b;
cout<<"Enter the position where the item has to be inserted: ";
cin>>p;
pos=p-1;
len_a=strlen(a);
len_b=strlen(b);
// Copying the input string into another array
while(i <=len_a)
	{
		c[i]=a[i];
		i++;
	} 
c[i]='\0';
tot_size = len_a+len_b;
o = pos+len_b;    //making space for string b
// Adding the sub-string
for(i=pos;i<tot_size;i++)
	{
		x = c[i];
		if(t<len_b)
			{
				a[i] = b[t];
				t=t+1;
			}
		a[o]=x;
		o=o+1;
	}
cout<<a;
return 0;	
}