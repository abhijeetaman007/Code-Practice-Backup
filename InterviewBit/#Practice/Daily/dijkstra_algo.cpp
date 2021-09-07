//Test Case
// 5 7
// 0 1 4
// 1 3 4
// 1 4 5
// 3 4 3
// 2 3 1
// 0 2 2
// 0 4 8

#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("/home/abhijeet/AMAN/Code/program_cpp/Scaler/Assignments/Daily/input/input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
	cout<<"Enter number of vertices and edges"<<endl;
	int v,e;
	cin>>v>>e;
	int n=v;
	int graph[v][v];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
				graph[i][j]=0;
			else
				graph[i][j]=INT_MAX;
		}
	}
	for(int i=0;i<e;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		graph[a][b]=min(c,graph[a][b]);   //Very imp do check for duplicate edges
		graph[b][a]=min(c,graph[b][a]);
	}

	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{
			// int a,b,c;
			// cin>>a>>b>>c;
			// graph[a][b]=c;
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}

	//Initialisation
	bool newReachableVertex[n];
	int distanceFromSrc[n];
	int src=1;
	int prev[n];
	for(int i=0;i<v;i++){
		distanceFromSrc[i]=INT_MAX;
		newReachableVertex[i]=false;
		prev[i]=-1;
	}

	
	for(int i=0;i<v;i++)
	{
		if(graph[src][i]!=INT_MAX)
		{
			newReachableVertex[i]=true;
			distanceFromSrc[i]=graph[src][i];
			prev[i]=src;
		}
	}

	cout<<"Initialisation "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<distanceFromSrc[i]<<" ";
	}


	//algo main part

	for(int count=0;count<v;count++)
	{
		int minidx=-1;
		int min=INT_MAX;
		for(int i=0;i<v;i++)
		{
			if(newReachableVertex[i] && min>distanceFromSrc[i])
			{
				min=distanceFromSrc[i];
				minidx=i;
			}
		}
		if(min==INT_MAX)
			continue;
		newReachableVertex[minidx]=false;
		for(int i=0;i<v;i++)
		{
			if(graph[minidx][i]!=INT_MAX)
			{
				if(distanceFromSrc[i]>distanceFromSrc[minidx]+graph[minidx][i])
				{
					distanceFromSrc[i]=distanceFromSrc[minidx]+graph[minidx][i];
					newReachableVertex[i]=true;
					prev[i]=minidx;
				}
				// distanceFromSrc[i]=min(distanceFromSrc[i],distanceFromSrc[i]+graph[minidx][i]);
			}
		}
	}

	cout<<"\nMinimum Distance of each vertex from src : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<distanceFromSrc[i]<<" ";
	}
	cout<<"\nPrevious index :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<prev[i]<<" ";
	}

}


