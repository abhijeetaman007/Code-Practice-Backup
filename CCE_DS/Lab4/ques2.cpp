//Evaluate PostFix
#include<bits/stdc++.h>
using namespace std;
class Stack
{

	int size=100;
	int a[100];
	int top=-1;
public :
	bool isFull()
	{
		if(top+1==size)
			return true;
		return false;
	}
	bool isEmpty()
	{
		if(top==-1)
			return true;
		return false;
	}
	void push(int x)
	{
		if(isFull()){
			cout<<"Stack is Full"<<endl;
			return;
		}
		a[++top]=x;
	}
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty pop"<<endl;
			return -1;
		}
		int x=a[top--];
		// top=top-1;
		return x;
	}
	int peek()
	{
		if(isEmpty()){
			cout<<"Stack is Empty peek"<<endl;
			return -1;
		}
		return a[top];
	}
	void display()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty  display"<<endl;
			return;
		}
		for(int i=top;i>=0;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
};



int main()
{
	string s;
	cin>>s;
	Stack st;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
		{
			int a=st.pop();
			int b=st.pop();
			int res=0;
			switch(s[i])
			{
				case '+': res=a+b;
							break;
				case '-':
							res=b-a;
							break;
				case '*':   res=b*a;
							break;
				case '/':	res=b/a;
							break;
				case '^':	res=b^a;
							break;
			}
			cout<<"res is "<<res<<endl;
			st.push(res);
		}
		else 
		{
			cout<<"pushing "<<s[i]-'0'<<endl;
			st.push(s[i]-'0');
		}
	}
	cout<<"Ans is "<<st.pop()<<endl;
}