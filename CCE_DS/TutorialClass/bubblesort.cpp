#include<iostream>
using namespace std;
void bubblesort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
			//diplaying
		cout<<"pass "<<i+1<<endl;
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	
		int flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		
		if(flag==0)
			break;
	}
}

int main()
{
	int arr[]={3,2,4,1,6,7,9,5,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"final sorted array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
