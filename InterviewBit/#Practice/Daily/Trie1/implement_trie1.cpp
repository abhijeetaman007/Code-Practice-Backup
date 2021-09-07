#include<bits/stdc++.h>
using namespace std;
class TrieNode
{
	public:
		int c;
		TrieNode *children[26];
		bool isEnd;
};

TrieNode* getNode()
{
	TrieNode* temp=new TrieNode;
	for(int i=0;i<26;i++)
	{
		temp->children[i]=NULL;
	}
	temp->isEnd=false;
	temp->c=1;
	return temp;
}

void insert(TrieNode* root,string str)
{
	TrieNode* temp;
	temp=root;
	for(int i=0;i<str.length();i++)
	{
		if(temp->children[str[i]-'a']==NULL)
		{
			TrieNode* t=new TrieNode;
			t=getNode();
			temp->children[str[i]-'a']=t;
		}
		else
		temp->c+=1;	
		temp=temp->children[str[i]-'a'];
	}
	temp->isEnd=true;
}

bool search(TrieNode* root,string str)
{
	if(root==NULL)
		return false;
	TrieNode* temp=root;
	for(int i=0;i<str.length();i++)
	{
		cout<<"Count is "<<temp->c<<endl;
		int idx=str[i]-'a';
		if(temp->children[idx]==NULL)
			return false;
		temp=temp->children[idx];
	}
	return temp->isEnd;
}

void deletenode(TrieNode* root,string str)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		TrieNode* temp=root;
		for(int i=0;i<str.size();i++)
		{
			if(temp->children[str[i]-'a']!=NULL)
			{
				temp->c-=1;
				if(temp->children[str[i]-'a']->c==0)
				{
					TrieNode* t=temp->children[str[i]-'a'];
					delete t;
					temp->children[str[i]-'a']=NULL;
					return;
				}
			}
			else
				return;
			temp=temp->children[str[i]-'a'];
		}
		temp->isEnd=false;
	}
}




int main()
{
	string keys[]={"artist","arc","art"};
	TrieNode* root=getNode();
	for(int i=0;i<3;i++)
	{
		insert(root,keys[i]);
	}
	cout<<search(root,"art")<<endl;
	cout<<search(root,"artist")<<endl;
	cout<<search(root,"arc")<<endl;
	deletenode(root,"art");
	// cout<<search(root,"cap")<<endl;
	cout<<search(root,"art")<<endl;
	cout<<search(root,"artist")<<endl;

}