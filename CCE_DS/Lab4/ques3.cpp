//Evaluate PostFix
#include<bits/stdc++.h>
using namespace std;
class Stack
{

	int size=100;
	string a[100];
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
	void push(string x)
	{
		if(isFull()){
			cout<<"Stack is Full"<<endl;
			return;
		}
		a[++top]=x;
	}
	string pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty pop"<<endl;
			return "";
		}
		string x=a[top--];
		// top=top-1;
		return x;
	}
	string peek()
	{
		if(isEmpty()){
			cout<<"Stack is Empty peek"<<endl;
			return "";
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
			cout<<st.peek()<<endl;
			string a=st.pop();
			string  b=st.pop();
			string res="";
			switch(s[i])
			{
				case '+': res=a+'+'+b;
							break;
				case '-':
							res=b+'-'+a;
							break;
				case '*':   res=b+'*'+a;
							break;
				case '/':	res=b+'/'+a;
							break;
				case '^':	res=b+'^'+a;
							break;
			}
			res='('+res+')';
			cout<<"res is "<<res<<endl;
			st.push(res);
		}
		else 
		{
			cout<<"pushing "<<s[i]<<endl;
			string temp="";
			temp=temp+s[i];	
			st.push(temp);
		}
	}
	cout<<"Ans is "<<st.pop()<<endl;
}