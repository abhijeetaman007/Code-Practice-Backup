#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;

        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;


    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
