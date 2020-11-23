#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int count=0,j=0,flag=0,pos=A.size();
    for(int i=A.size()-1;i>=0;i--)
    {
        if(count!=A.size())
        {
            if(flag==0)
            {
             if(A[i]==9)
            {
                A[i]=0;
                count=count+1;
                pos=i;
            }
            else
            flag=1;
            }
            if(A[j]==0)
            {
                j++;
            }
        }
    }
    if(count==A.size())
    {
            vector<int>v(A.size()+1);
            v[0]=1;
            return v;
        }
    A[pos-1]+=1;
    if(j!=0)
    A.erase(A.begin(),A.begin()+j);
    if(A.empty())
    {
        A.push_back(1);
    }
    return A;
}

int main()
{
	int n;
	vector<int> A;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        A.push_back(a);
    }
    solve(vector<int> A;)
}