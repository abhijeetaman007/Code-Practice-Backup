#include<bits/stdc++.h>
using namespace std;

int part(vector<int> &v,int start,int end)
{
	int p=start;
	for(int i=start;i<end;i++)
	{
		if(v[i]<=v[end])
		{
			swap(v[i],v[p]);
			p++;
		}
	}
	swap(v[p],v[end]);
	return p;
}



void quicksort(vector<int> &v,int start,int end)
{
	if(start<end)
	{
		int p=part(v,start,end);
		quicksort(v,start,p-1);
		quicksort(v,p+1,end);
	}
}


int main()
{
	// int n;
	// cin>>n;
	vector<int> v;
	int a=0;
	for(int i=0;a!=-1;i++)
	{
			// int a;
			cin>>a;
			// v[i]=a;
			// v1[i]=a;	
			v.push_back(a);
	}
	vector<int> v1(v);
	int n=v.size();
	quicksort(v,0,n-1);
	int c=1,f=0;
	if(v[0]==v1[0])
		f=1;
	for(int i=0;i<n;i++)
	{
		// cout<<v[i]<<" "<<v1[i]<<endl;
		if(v[i]==v1[i])
		{
			if(f==0)
			{
				c++;
			}
			f=1;
		}
		else
		{
			if(f==1)
			{
				c++;
			}
			f=0;
		}
	}
	cout<<"Ans is "<<c<<endl;

}

// 6 50 16 30 37 12 43 52 24 2 53 28 31 36 10 32 51 60 64 38 3 46 7 4 55 72 75 66 73 68 54 22 25 65 5 49 0 8 47 78 35 57 83 90 27 9 19 26 76 41 39 40 1 11 67 61 71 56 58 108 110 102 15 70 59 14 42 23 29 20 118 13 106 17 69 18 21 34 44 62 33 80 45 87 48 63 74 131 134 111 77 79 81 139 132 124 82 84 85 86 88 89 91 92 93 130 94 98 95 96 151 97 99 100 109 101 142 103 143 104 105 146 107 112 113 138 114 115 116 117 160 119 120 148 145 121 122 123 125 126 127 135 128 153 129 133 144 136 137 140 141 147 149 150 152 154 155 156 157 158 159
// 6 50 16 30 37 12 43 52 24 2 53 28 31 36 10 32 51 60 64 38 3 46 7 4 55 72 75 66 73 68 54 22 25 65 5 49 0 8 47 78 35 57 83 90 27 9 19 26 76 41 39 40 1 11 67 61 71 56 58 108 110 102 15 70 59 14 42 23 29 20 118 13 106 17 69 18 21 34 44 62 33 80 45 87 48 63 74 131 134 111 77 79 81 139 132 124 82 84 85 86 88 89 91 92 93 130 94 98 95 96 151 97 99 100 109 101 142 103 143 104 105 146 107 112 113 138 114 115 116 117 160 119 120 148 145 121 122 123 125 126 127 135 128 153 129 133 144 136 137 140 141 147 149 150 152 154 155 156 157 158 159
