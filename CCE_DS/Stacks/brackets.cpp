#include <iostream>
#include <cstring>

using namespace std;
typedef char elt_type;
class stack
{	int top;
	elt_type a[25];
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
{	char exp[25];
    stack s(25);int i;
    cout<<"Enter expression";
    cin>>exp;
    for(i=0;i<strlen(exp);i++){
    switch (exp[i]){
case '{':
case '(':
case'[':
    s.push(exp[i]); break;

case '}' : if (s.pop()!='{') {cout<<"Error1";
                        return 0;}
                        break;
case ']':if (s.pop()!='['){cout<<"Error2";
                        return 0;}
                        break;
case ')' :if (s.pop()!='(') {cout<<"Error3";
						return 0;}
						break;
 default: break;
    }

    }
    if(s.IsEmpty()&&(i==strlen(exp)))
    cout<<"Correct";
    else cout<<"Error4";
}

