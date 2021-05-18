#include<bits/stdc++.h>
using namespace std;
struct node
{
  int info;
  node *right;
  node *left;
  node()
  {
    right=NULL;
    left=NULL;
  }
};
node *root=NULL;
node* createnode()
{
  node *n;
  n=(node*)malloc(sizeof(node));
  return n;
}
void inorder(node *rt)
{
  cout<<"fUNCTION CALLED"<<endl;
	if(rt==NULL)
	return;
  else{
  //  cout<<"tt1"<<endl;
    inorder(rt->left);
  //  cout<<"tt2"<<endl;
    cout<<"element is"<<rt->info<<endl;
  //  cout<<"tt3"<<endl;
    inorder(rt->right);
  //  cout<<"tt4"<<endl;
  }
}
int main()
{
  int n;
  cin>>n;
  int a,b;
  char c;
  vector<node*> v;
  for(int i=0;i<n-1;i++)
  {
    cin>>a>>b>>c;
    node *d;
    d=createnode();
    d->info=b;
    d->left=NULL;
    d->right=NULL;
    if(root==NULL)
    {
      cout<<"creation of root"<<endl;
      node *e;
      e=createnode();
      root=e;
      e->info=a;
      v.push_back(e);
      v.push_back(d);
      cout<<"root info is"<<root->info;
      if(c=='L')
      {
        root->left=d;
        cout<<"inserted left"<<endl;
      }
      if(c=='R')
      {
        root->right=d;
        cout<<"inserted right"<<endl;
      }
      cout<<"root left is"<<root->left->info<<endl;
      cout<<"Test"<<(v[0])->info<<"test "<<(v[1])->info<<endl;
    }
    else
    {
        cout<<"new node inserted"<<endl;
        vector<node*>::iterator itr,temp;
        //itr=v.begin();
        int i=0;
        v.push_back(d);
        cout<<"First element is "<<v[i]->info<<endl;
        int flag=0;
        while(flag!=1)
        {
          cout<<"value is"<<v[i]->info<<endl;
          if((v[i]->info)==a)
          {
            if(c=='L')
            {
              if(v[i]->left==NULL)
              {
                v[i]->left=d;
                cout<<"inserted left"<<endl;
                flag=1;
              }
              else
              {
                i++;
                continue;
              }
            }
            if(c=='R')
            {
              if(v[i]->right==NULL)
              {
                v[i]->right=d;
                cout<<"inserted right"<<endl;
                flag=1;
              }
              else
              {
                i++;
                continue;
              }
            }
          /*  if(v[i]->left!=NULL||v[i]->right!=NULL)
            {
              //temp=itr;
              //itr++;
              node *temp;
              temp=&v[i]
              v.erase(temp);
              cout<<"erased"<<endl;
            }*/
          }
          //itr++;
          i++;
        }
    }
  }
  cout<<v[2]->info<<"  "<<endl;
  cout<<v[2]->right<<endl;
  cout<<" "<<v[2]->left<<endl;
  cout<<"Size of vector is"<<v.size()<<endl;
  inorder(root);
}
