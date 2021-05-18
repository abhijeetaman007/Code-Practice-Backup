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

int getPriority(char c)
{

	int x=0;
	switch(c)
	{
		case '^': x= 3;
				break;
		case '*':
		case '/': x= 2;
			break;
		case '+':
		case '-':x= 1;
		break;
	}
	return x;
}


int main()
{
	Stack st;
	string s,ans;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{

		if(s[i]=='(')
		{
			st.push('(');
		}
		else if(s[i]==')')
		{
			while(!st.isEmpty() && st.peek()!='('  )
			{
				// cout<<st.peek()<<endl;
				ans=ans+(char)st.pop();
			}
			st.pop();
		}
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
		{
			while(!st.isEmpty() && getPriority(st.peek())>=getPriority(s[i]) )
			{

				ans=ans+(char)st.pop();
			}
			st.push(s[i]);
		}
		else
		{
			ans=ans+s[i];
		}
	}
	while(!st.isEmpty())
	{
		ans=ans+(char)st.pop();
	}
	cout<<ans<<endl;

}