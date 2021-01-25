#include<bits/stdc++.h>
using namespace std;
int largest(int *arr,int n)
{
	int x=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(x<arr[i])
			x=arr[i];
	}
	return x;
}

int main()
{	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int y=largest(arr,n);
	printf("largest number is %d",y);
}