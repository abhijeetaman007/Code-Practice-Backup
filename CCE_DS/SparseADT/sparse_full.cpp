#include<bits/stdc++.h>
using namespace std;
class triplet
{
public:
	int row;
	int col;
	int val;
};


int main()
{
	int m,n;
	cout<<"Enter rows and columns"<<endl;
	cin>>m>>n;
	int arr[m][n],b[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=0;		
		}
	}
	int nonzero_count=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]!=0){
				nonzero_count++;
			}
		}
	}
	cout<<"nonzero_count :"<<nonzero_count<<endl;
	triplet a[nonzero_count+1];
	triplet aT[nonzero_count+1];
	a[0].row=m;
	aT[0].row=m;
	a[0].col=n;
	aT[0].col=n;
	a[0].val=nonzero_count;
	aT[0].val=nonzero_count;
	int k=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]!=0)
			{
				a[k].row=i;
				a[k].col=j;
				a[k++].val=arr[i][j];
			}
		}
	}

	cout<<"Sparse Matrix Efficient Representation :"<<endl;

	for(int i=0;i<=nonzero_count;i++)
	{
		cout<<a[i].row<<" "<<a[i].col<<" "<<a[i].val<<endl;	
	}

	int row_terms[n];
	int start_pos[n];
	k=0;

	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<m;j++)
		{
			if(arr[j][i]!=0)
				c++;
		}
		row_terms[k++]=c;
	}


	cout<<"row terms"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<row_terms[i]<<" ";
	}

	cout<<endl;
	
	start_pos[0]=1;
	for(int i=1;i<n;i++)
	{
		start_pos[i]=row_terms[i-1]+start_pos[i-1];
	}

	cout<<"start_pos"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<start_pos[i]<<" ";
	}
	cout<<endl;

	cout<<"Final matrix after transpose in Efficient Representation"<<endl;
	for(int i=1;i<=nonzero_count;i++)
	{
		aT[start_pos[a[i].col]].row=a[i].col;
		aT[start_pos[a[i].col]].col=a[i].row;
		aT[start_pos[a[i].col]++].val=a[i].val;
		b[a[i].col][a[i].row]=a[i].val;
	}
	for(int i=0;i<=nonzero_count;i++)
	{
		cout<<aT[i].row<<" "<<aT[i].col<<" "<<aT[i].val<<endl;	
	}
	
	cout<<"Final Matrix :"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}


}

// 11 0 0 0 0 1
// 0 0 0 1 0 0
// 1 2 0 0 0 0
// 0 0 0 1 0 0
// 0 0 0 0 0 0
// 0 4 0 0 0 0
 