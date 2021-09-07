#include<bits/stdc++.h>
using namespace std;
int dirX[]={1,0,-1,0};
int dirY[]={0,1,0,-1};
class triplet 
{
 public:
    int first;
    int second;
    int third;
};
struct comp
{
    bool operator()(triplet const&t1,triplet const&t2)
    {
        return t1.first<t1.first;
    }
};
int main()
{
	int m,n;
	cin>>m>>n;
	vector<string> v(m);

	for(int i=0;i<m;i++)
	{
		cin>>v[i];
	}
	vector<vector<bool> > visit(m,vector<bool> (n,false)); 
    vector<vector<int> > v1(m,vector<int> (n,INT_MAX));
    for(int i=0;i<min(n,m);i++)
    {
        v1[i][i]=0;
    }
    priority_queue<triplet,vector<triplet>,comp >q;
    triplet t;
    t.first=0;
    t.second=0;
    t.third=0;
    q.push(t);
    while(!q.empty())
    {
        triplet temp=q.top();
        q.pop();
        if(visit[temp.second][temp.third])
        {
            continue;
        }
        visit[temp.second][temp.third]=true;
        int i=temp.second;
        int j=temp.third;
        for(int k=0;k<4;k++)
        {
            
            int i1=i+dirY[k];
            int j1=j+dirX[k];
            if(i1>=0 && i1<m && j1>=0 && j1<n)
            {	        
          	    if(!visit[i1][j1])
                {
                    cout<<"if2"<<endl;
                    cout<<"i1 is "<<i1<<endl;
                    cout<<"j1 is "<<j1<<endl;
                    triplet t1;
                    t1.second=i1;
                    t1.third=j1;
                    if(dirX[k]==1 && dirY[k]==0 )
                    {
                        cout<<"R"<<endl;
                        if(v[i][j]=='R'){
                            cout<<"i is "<<i<<endl;
                            cout<<"j is "<<j<<endl;
                            t1.first=v1[temp.second][temp.third];
                            // cout<<v[temp.second][temp.third]<<endl;
                        }
                        else
                            t1.first=v1[temp.second][temp.third]+1;
                        v1[i1][j1]=min(v1[i1][j1],t1.first);
                        cout<<"val is "<<v1[i1][j1]<<endl;
                    }
                    else if(dirX[k]==0 && dirY[k]==1 )
                    {
                        cout<<"U"<<endl;
                        cout<<"i is "<<i<<endl;
                            cout<<"j is "<<j<<endl;
                        if(v[i][j]=='U'){
                        
                        t1.first=v1[temp.second][temp.third];
                        }else
                            t1.first=v1[temp.second][temp.third]+1;
                        v1[i1][j1]=min(v1[i1][j1],t1.first);
                        cout<<"val is "<<v1[i1][j1]<<endl;
                    }
                    else if(dirX[k]==-1 && dirY[k]==0 )
                    {
                        cout<<"L"<<endl;
                        cout<<"i is "<<i<<endl;
                            cout<<"j is "<<j<<endl;
                        if(v[i][j]=='L')
                        t1.first=v1[temp.second][temp.third];
                        else
                            t1.first=v1[temp.second][temp.third]+1;
                        v1[i1][j1]=min(v1[i1][j1],t1.first);
                        cout<<"val is "<<v1[i1][j1]<<endl;
                    }
                    else if(dirX[k]==0 && dirY[k]==-1 )
                    {
                        cout<<"D"<<endl;
                        cout<<"i is "<<i<<endl;
                            cout<<"j is "<<j<<endl;
                        if(v[i][j]=='D')
                            t1.first=v1[temp.second][temp.third];
                        else
                            t1.first=v1[temp.second][temp.third]+1;
                            v1[i1][j1]=min(v1[i1][j1],t1.first);
                            cout<<"val is "<<v1[i1][j1]<<endl;
                    }
                    q.push(t1);
                }
            }
        }
    }
    for(int p=0;p<m;p++)
    {
        for(int q=0;q<n;q++)
        {
            cout<<v1[p][q]<<" ";
        }
        cout<<endl;
    }
    return v1[m-1][n-1];
}