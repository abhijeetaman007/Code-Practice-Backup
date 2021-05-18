#include <iostream>
#include <cstring>

using namespace std;
typedef char elt_type;
class stack
{	int top;
	elt_type a[20];
	int max;
public:

	stack(int m);
bool IsFull();
	bool IsEmpty();
	void push(elt_type x);
	elt_type pop();
	void display();
	};
stack::stack(int m)
{
max=m;
top=-1;
}
bool stack::IsFull()
	{
		if(top==max-1)
			return true;
		return false;
	}
bool stack::IsEmpty()

	{	if(top==-1)
			return true;
		return false;
	}
	void stack::push(elt_type item)
{       if(IsFull())
	cout<<"Stack is full \n";
	else
		a[++top]=item;
}

elt_type stack::pop()
{
	if(IsEmpty())
		{cout<<"stack is empty\n"; return -1;}
	else{
	       //cout<<"deleted element is"<<(a[top]);
                                    return (a[top--]);


}}
void stack::display()
{        if(IsEmpty())
		cout<<"stack is empty\n";
	else
	for(int i=top;i>-1;i--)
		cout<<a[i];
}
int main()
{	char str[20];
    stack s(20);int i;
    cout<<"Enter String";
    cin>>str;
    for(i=0;i<(int)(strlen(str)/2);i++)
        s.push(str[i]);

    if(strlen(str)%2==1)
    {
    		for(i++;i<(int)strlen(str);i++)
   			 if(s.pop()!=str[i]) {
            cout<<"Not a palindrome";
            return 0;
        }	
    }
    else
    {
    	for(i;i<(int)strlen(str);i++)
    	if(s.pop()!=str[i]) {
            cout<<"Not a palindrome";
            return 0;
        }
    }
    
   if(s.IsEmpty())
    cout<<"Palindrome";
    return 0;
}
