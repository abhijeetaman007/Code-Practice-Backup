#include<iostream>
using namespace std;
//Declaring some variables globally
	int n;//Size of array
	int b;
	int t1=-1;//top of first stack
	int t2;
	int sno;//stack number either 1 or 2
	int bound;
//Funtion Prototype
void push(int e,int *a);
int pop(int *a);
void display(int *a);
//main
int main()
{
	cin>>n;
	int a[n];//array used for stack
	cin>>b;//Setting boundry  -->b means stack when can till the index b
	bound=b;//bound is fixed which is initial b 
	t2=n;//top of second stack
		do
	{
	cout<<"1 push\n2 pop \n3 display \n-1 exit\n";
		int ch;
	cin>>ch;	
		switch(ch)
		{
			case 1:
					int e;
					cout<<"Enter element to be pushed"<<endl;
					cin>>e;
					push(e,a);
					break;
			case 2:
					cout<<pop(a);
					break;
			case 3:	display(a);
					break;
			case -1:return 0;			
		}
	}while(1);
	

}
void push(int e,int *a)
{
	cout<<"Enter Stack number"<<endl;
	cin>>sno;
	if(sno==1)
	{
		cout<<"inide sno1"<<endl;
		if(t1<b)
		{
			a[++t1]=e;
		}
		else
		{
			if(t2>b+1)
			{
				b=b+1;
				a[++t1]=e;
			}
			else
				cout<<"Stack is full"<<endl;
		}
		// cout<<"b is "<<b<<endl;
		// cout<<"t1 is "<<t1<<endl;

	}
	if(sno==2)
	{
		
		cout<<"inide sno2"<<endl;
		if(t2>b+1)
		{
			a[--t2]=e;
		}
		else
		{
			if(t1<b)
			{
				b=b-1;
				a[--t2]=e;
			}
			else
				cout<<"Stack is full"<<endl;
		}
		// cout<<"b is "<<b<<endl;
		// cout<<"t2 is "<<t2<<endl;
	}

}
int pop(int *a)
{
	cout<<"Enter Stack number"<<endl;
	cin>>sno;
	if(sno==1)
	{
		if(t1==-1)
		{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
		if(b>bound)
			b=b-1;
		return a[t1--];
	}
	if(sno==2)
	{

		if(t2==n)
		{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
		if(b<=bound)
			b=b+1;
		return a[t2++];
	}
}
void display(int *a)
{
	cout<<"Enter Stack number"<<endl;
	cin>>sno;
	if(sno==1)
	{
		if(t1==-1)
		{
			cout<<"Stack is Empty"<<endl;
			return ;
		}
		for(int i=t1;i>=0;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	else
	{
		if(t2==n)
		{
			cout<<"Stack is Empty"<<endl;
			return ;
		}
		for(int i=t2;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
}