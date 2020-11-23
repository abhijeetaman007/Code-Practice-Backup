#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> v(9);
	for(int i=0;i<9;i++)
	{
		cin>>v[i];
	}
	unordered_set<string> s;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(v[i][j]!='.'){
				string row="row";
				row=row+v[i][j];
				row=row+to_string(i);
				string col="col";
				col=col+v[i][j];
				col=col+to_string(j);
				int boxnum=(i/3)*3+(j/3);
				string box="box";
				box=box+v[i][j];
				box=box+to_string(boxnum);
				if(s.find(row)==s.end()&&s.find(col)==s.end()&&s.find(box)==s.end())
				{
					s.insert(row);
					s.insert(col);
					s.insert(box);
				}
				else
				{
					cout<<0<<endl;
					return 0;
				}
			}
		}
	}
	cout<<1<<endl;
	return 0;
}