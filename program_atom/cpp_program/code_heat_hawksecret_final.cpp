#include <bits/stdc++.h>
using namespace std;
const long long int MAX = 10000001;

long long int factor[MAX] = { 0 };

void generatePrimeFactors()
{
	factor[1] = 1;

	for (long long int i = 2; i < MAX; i++)
		factor[i] = i;

	for (long long int i = 4; i < MAX; i += 2)
		factor[i] = 2;

	for (long long int i = 3; i * i < MAX; i++) {
		if (factor[i] == i) {
			for (long long int j = i * i; j < MAX; j += i) {
				if (factor[j] == j)
					factor[j] = i;
			}
		}
	}
}
long long int calculateNoOFactors(long long int n)
{
	if (n == 1)
		return 1;

	long long int ans = 1;

	long long int dup = factor[n];

	long long int c = 1;

	long long int j = n / factor[n];

	while (j != 1) {
		if (factor[j] == dup)
			c += 1;
		else {
			dup = factor[j];
			ans = ans * (c + 1);
			c = 1;
		}

		j = j / factor[j];
	}

	ans = ans * (c + 1);

	return ans;
}

int main()
{
	generatePrimeFactors();
  long long int t;
  cin>>t;
  while(t--){
  long long int a,b;
  cin>>a>>b;
  if(a==0 && b==0)
  {
    cout<<"0"<<endl;
    continue;
  }
  if(a==0 && b!=0)
  {
    a=1;
  }
  long long int max=-1;
  long long int count=0;
  for(long long int i=a;i<=b;i++)
  {
    long long int c=0;
    c=calculateNoOFactors(i);
    if(max<c)
    {
      max=c;
      count=0;
    }
    if(max==c)
    {
      count+=1;
    }
  }
  cout<<count+1<<endl;
}
return 0;
}
