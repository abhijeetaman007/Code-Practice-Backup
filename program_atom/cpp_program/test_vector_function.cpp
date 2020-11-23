#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> array_of_Pairs(int arr[], int N)
{
    vector<pair<int, int>> v;
    for(int i=0;i<N/2;i++)
    {  // cout<<arr[i]<<" "<<arr[N-(i+1)]<<endl;
        pair<int,int> a={arr[i],arr[N-(i+1)]};
        v.push_back(a);
    }
    if(N%2!=0)
    {
        pair<int,int> b={arr[N/2],arr[N/2]};
        v.push_back(b);
    }
    return v;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;

        // Input size of array
        cin>>N;

        int arr[N];
        // Input array elements
        for(int i = 0; i < N; i++)
            cin>>arr[i];

        // Store the result in vector of pair
        vector<pair<int, int> > res = array_of_Pairs(arr, N);

        for(int i = 0; i < res.size(); i++)
        {
            cout << "("<< res[i].first << "," <<res[i].second << ") ";
        }
        cout << endl;

    }
    return 0;
}
