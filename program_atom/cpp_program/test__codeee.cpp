#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[10];
    cin>>n;
for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
                min=a[j];
           cout<<"min for"<<i<<"is"<<min<<endl;
           cout<<a[i]<<endl;
        }
        int temp=a[i];
        a[i]=min;
        min=temp;

        cout<<"After"<<i<< "iteration"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }


    }
    cout<<"final"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
