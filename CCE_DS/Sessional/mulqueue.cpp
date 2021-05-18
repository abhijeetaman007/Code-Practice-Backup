#include<bits/stdc++.h>
using namespace std;
class mulqueue
{
	int q[100],f[100],r[100],m,n;
	public:
		mulqueue(int maxsize,int no)
		{
			m=maxsize;
			n=no;
			for(int i=0;i<n;i++)
			{
				f[i]=r[i]=i*(m/n)-1;
			}
		}
		// x is (x-1)th queue
		bool isempty(int x)
		{
			if(f[x-1]==r[x-1])
			{

				return true;
			}
			return false;
		}
		bool isfull(int x)
		{
			if(r[x-1]==x*(m/n)-1)
				return true;
			return false;
		}
		void enqueue(int x,int y)
		{
			if(isfull(x))
				cout<<"Queue is full"<<endl;
			else{

				q[++r[x-1]]=y;
				cout<<"enqueued"<<endl;
			}
		}
		void dequeue(int x)
		{
			if(isempty(x))
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				cout<<"deleted item "<<q[++f[x-1]]<<endl;
			}
		}
		void display(int x)
		{
			if(isempty(x))
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				cout<<x<<" Queue: "<<endl;
				for(int i=f[x-1]+1;i<=r[x-1];i++)
				{
					cout<<q[i]<<" ";
				}
					cout<<endl;

			}
		}
};

int main()
{
	int m=16,n=4;
	mulqueue q(m,n);
	do
	{
		int o,x,y;
		cin>>o;
		switch(o)
		{
			case 1:
				// int x,y;
				cin>>x>>y; 
				q.enqueue(x,y);
				break;
			case 2: cin>>x;
				q.dequeue(x);
				break;
			case 3: cin>>x;
				q.display(x);
				break;
			case 4: cin>>x;
				q.isempty(x);
				break;
			case 5: cin>>x;
				q.isfull(x);
				break;
			case 6: return 0;
		}
	}while(1);
}