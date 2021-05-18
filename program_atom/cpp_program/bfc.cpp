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
    if(rt==NULL)
    return;
  else{
    inorder(rt->left);
    cout<<rt->info<<" ";
    inorder(rt->right);
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
      node *e;
      e=createnode();
      root=e;
      e->info=a;
      v.push_back(e);
      v.push_back(d);
      if(c=='L')
      {
        root->left=d;
      }
      if(c=='R')
      {
        root->right=d;
      }
    }
    else
    {
        vector<node*>::iterator itr,temp;
        int i=0;
        v.push_back(d);
        int flag=0;
        while(flag!=1)
        {
          if((v[i]->info)==a)
          {
            if(c=='L')
            {
              if(v[i]->left==NULL)
              {
                v[i]->left=d;
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
                flag=1;
              }
              else
              {
                i++;
                continue;
              }
            }
          }
          i++;
        }
    }
  }
 inorder(root);
}
