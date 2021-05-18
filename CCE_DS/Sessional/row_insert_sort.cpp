#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter size of matrix"<<endl;
	int m,n;
	int  mat[100][100];
	cin>>n>>m;
	cout<<"Enter Matrix"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>mat[i][j];
	}
	//Sorting
	for(int row=0;row<n;row++)
	{
		int key,j;
		for(int i=1;i<m;i++)
		{
			key=mat[row][i];
			j=i-1;
			while(j>=0&&mat[row][j]>key)
			{
				mat[row][j+1]=mat[row][j];
				j=j-1;
			}
			mat[row][j+1]=key;
		}
	}
	//Printing
	cout<<"Printing matrix"<<endl; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}