#include<bits/stdc++.h>
using namespace std;
string minWindow(string A, string B) {
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<"inside "<<endl;
    int n=A.size();
    int m=B.size();
    unordered_map <char,int> mb;
    unordered_map <char,int> ma;
    //creating hash map for A called mb
    for(int i=0;i<m;i++)
    {
        if(mb.find(B[i])!=mb.end())
        {
            mb[B[i]]++;
        }
        else
        {
            mb[B[i]]=1;
        }
        mb[B[i]]++;
    }
    int len=0,l=-1,r=-1;
    int flag=0; 
    // flag=0 for j pointer to move and flag=1 for i pointer to move.
    string ans="";
    int i=1,j=0;
    // travsersing A
    while(i<n && j<n)
    {
        int ak;
        cin>>ak;
        cout<<"in"<<endl;
        cout<<"flag is "<<flag<<endl;
        cout<<"i is "<<i<<"j is "<<j<<endl;
        if(flag==0)
        {
            if(mb.find(A[j])!=mb.end()) // looking for A[j] in mb
            {
                if(ma.find(A[j])==ma.end()) // inserting in ma hash map for A if not already present
                {
                    ma[A[j]]=1;
                    j++;
                }
                else if((ma.find(A[j])!=ma.end()) && (ma[A[j]]<mb[A[j]])) // if already present and freq in ma<mb inc freq and j
                {
                    ma[A[j]]++;
                    j++;
                }
                else if((ma.find(A[j])!=ma.end()) && (ma[A[j]]==mb[A[j]])) // if already present and freq is same compare ma and mb and compare len and store l and r and inc i
                {
                    if(ma==mb)
                    {
                        if((j-i+1)<len)
                        {
                            l=i;
                            r=j;
                            len=r-l+j;
                        }
                    }
                    i++;
                    flag=1;
                }
                else // else inc i
                {
                    i++;
                    flag=1;
                }
            }
        }
        else if(flag==1)
        {
            if(mb.find(A[i])!=mb.end()) // looking for A[i] in mb
            {
                if(ma[A[i]]<mb[A[i]]) // if freq in ma < mb, inc j
                {
                    j++;
                    flag=0;
                }
                else if(ma[A[i]]==mb[A[i]]) // if freq same, compare ma and mb, compare len and store l and r and inc j
                {
                    if(ma==mb)
                    {
                        if((j-i+1)<len)
                        {
                            l=i;
                            r=j;
                            len=r-l+j;
                        }
                    }
                    j++;
                    flag=0;
                }
                else if(ma[A[i]]>mb[A[i]]) // if freq of A[i] ma>mb, reduce freq and inc i
                {
                    ma[A[i]]--;
                    i++;
                }
            }
        }
    }
    for(int o=l;o<=r;o++) // store answer string in ans from l to r
    {
        ans+=A[o];

    }
    return ans;
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<minWindow(a,b);
}