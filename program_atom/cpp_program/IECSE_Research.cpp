#include <queue>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <complex>
#include <fstream>
#include <cstring>
#include <string>
#include <climits>
using namespace std;
//macros
typedef long long ll;
typedef complex<double> point;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;




#define FOR(k,a,b) for(int k=(a); k<=(b); ++k)
#define REP(k,a) for(int k=0; k<(a);++k)
#define SZ(a) int((a).size())
#define ALL(c) (c).begin(),(c).end()
#define PB push_back
#define MP make_pair
#define INF 999999999
#define INFLONG 1000000000000000000LL
#define MOD 1000000007
#define MAX 100
#define ITERS 100
#define pi 3.1415926
#define MAXN 100000
#define _gcd __gcd

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int grid[50][50];
    REP(i,n){
        REP(j,n){
            cin >> grid[i][j];
        }
    }
int fg=0;
    REP(i,n){
      int flag=0;
        REP(j,n){
            if(grid[i][j]==1) continue;
            bool pass = false;
            for(int r = 0;r<n;r++){
              {
                if(r==i) continue;
              }
                for(int c = 0; c < n; c++){
                    if(c==j) continue;
                    int sum = grid[r][j]+grid[i][c];
                    if(sum==grid[i][j]){
                        pass=true;
                        break;
                    }
                }
                if(pass)break;
            }
            if(!pass){
                cout << "No"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
          fg=1;
        }
        break;
    }
    if(fg!=1)
    cout << "Yes"<<endl;
}
}
