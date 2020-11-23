#include<bits/stdc++.h>
using namespace std;

int colorful(int N) {
    char st[20];
    sprintf(st, "%d", N);//imp and use is similar to to_strings
    int len = strlen(st);
    
    map<long long, bool> Hash;

    for(int i = 0; i < len; ++i) {
        long long mul = 1;
        for(int j = i; j < len; ++j) {
            cout<<"i is "<<i<<"j is "<<j<<endl;
            mul *= (long long)(st[j] - '0');
            cout<<mul<<endl;
            if(Hash.find(mul) != Hash.end())
                    return 0;
            Hash[mul] = true;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<colorful(n);
}