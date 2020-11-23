//There is problem of space even if deallocationg or dequeuing still cant use them in linear queue
#include <iostream>

using namespace std;

class lqueue
{	int front,rear;
	int *q;
	int max;
public:

	lqueue(int m);//constructor
	~lqueue(){
		delete [] q;
	}
bool IsFull();
	bool IsEmpty();
	void enque(int item);
	int deque();
	void display();
	void vari()
	{
		// cout<<"count is "<<count<<endl;
	cout<<"Front is "<<front<<endl;
	cout<<"Rear is "<<rear<<endl;
	cout<<"max"<<max<<endl;
	}
	};
lqueue::lqueue(int m)
{
	q=new int[m];
	max=m;
	front=rear=-1;
}
bool lqueue::IsFull()
	{
		if(rear==max-1)
			return true;
		return false;
	}
bool lqueue::IsEmpty()

	{	if(front==rear)
			return true;
		return false;
	}
	void lqueue::enque(int item)
{       if(IsFull())
	cout<<"lqueue is full \n";
	else
		q[++rear]=item;
}

int lqueue::deque()
{
	if(IsEmpty())
		{cout<<"stack is empty\n"; return -1;}
	else{

    return (q[++front]);
}}
void lqueue::display()
{        if(IsEmpty())
		cout<<"lqueue is empty\n";
	else{
	for(int i=front+1;i<=rear;i++){
		cout<<q[i]<<" ";
		}
		cout<<endl;
	}
}
int main()
{	int size;
	cin>>size;
	lqueue que(size);
	int option,ele;

	do{

cout<<"1.insert\n2.delete\n3.display\n4.exit\n";
cin>>option;
switch(option)
	{
	case 1:	cout<<"enter the element to be pushed\n";
		cin>>ele;
		que.enque(ele);
		break;
	case 2:	cout<<"Deleted item\n"<<que.deque()<<endl;
		break;
	case 3:	que.display();
	break;
	case 4:return (0);
	break;
	case 5:que.vari();
	}
	}while(1);
}
