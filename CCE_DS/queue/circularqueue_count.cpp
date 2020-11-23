#include <iostream>

using namespace std;

class cqueue
{	int front,rear;
	int q[100];
	int max,count;
public:

	cqueue(int m);
	bool IsFull();
	bool IsEmpty();
	void enque(int item);
	int deque();
	void display();
	void vari();
	};
cqueue::cqueue(int m)
{
	count=0;
	max=m;
	front=0;rear=0;
}
bool cqueue::IsFull()
	{
     		 // cout<<"count is "<<count<<endl;

		if(count==max)
			return true;
		return false;
	}
bool cqueue::IsEmpty()

	{
     		 // cout<<"count is "<<count<<endl;
		if(count==0){
			return true;
		}
		return false;
	}
	void cqueue::enque(int item)
{       if(IsFull())
	cout<<"cqueue is full \n";
	else{
		rear=((rear)%max);
		q[rear]=item;
		rear=(rear+1)%max;
		count=count+1;
		// cout<<"item pushed at position "<<rear-1<<endl;
      // cout<<"count is "<<count<<endl;

}}

int cqueue::deque()
{
	if(IsEmpty())
		{cout<<"queue is empty\n"; return -1;}
	else{
      front=(front+1)%max;
      count=count-1;
      // cout<<"count is "<<count<<endl;
      
    return (q[(front-1+max)%max]);
}}
void cqueue::display()
{        if(IsEmpty())
		cout<<"cqueue is empty\n";
	else
	{
		int i=front;
		cout<<"elements are "<<endl;
		do
		{
			cout<<q[i]<<" ";
			i=(i+1)%max;
			// c=c+1;

		}while(i!=rear);
		cout<<endl;
      // cout<<"count is "<<count<<endl;

	}
}
void cqueue::vari(){
	cout<<"count is "<<count<<endl;
	cout<<"Front is "<<front<<endl;
	cout<<"Rear is "<<rear<<endl;
	cout<<"max"<<max<<endl;


}
int main()
{	int size;
	cout<<"Enter Size"<<endl;
	cin>>size;
	// size=size+1;
	cqueue que(size);
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
	case 2:	cout<<que.deque();
		break;
	case 3:	que.display();break;
	case 4:return (0);
	case 5: que.vari();
	}
	}while(1);
}

