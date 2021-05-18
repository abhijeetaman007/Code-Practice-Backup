#include<bits/stdc++.h>
using namespace std;
struct node
{
  int info;
  node *right;
  node *left;
  int flag;
  int count;
  node *parent;
};
node *root=NULL;
node* createnode()
{
  node *n;
  n=(node*)malloc(sizeof(node));
  n->left=NULL;
  n->right=NULL;
  n->flag=0;
  n->parent=NULL;
  return n;
}
int max1=0;
vector<int> counter;
void inorder(node *rt)
{
  cout<<"fUNCTION CALLED"<<endl;
  if(rt==NULL){
    cout<<"funt null and returned"<<endl;
    return;
  }

  else{
    //static int c=0;
    //c++;
    //cout<<"c updated and c is"<<c<<endl;
    cout<<"Info of root"<<rt->info<<" "<<rt->flag<<endl;
     if(rt->flag!=1)
    {
      rt->flag=1;
      if(rt==root)
      rt->count=1;
      else
      rt->count=(rt->parent)->count+1;
      cout<<"count for node is"<<rt->count<<endl;
    }
    if(rt->left==NULL && rt->right==NULL)
    {
      counter.push_back(rt->count);
      cout<<rt->count<<" pushed to counter"<<endl;
    }
  //  cout<<"tt1"<<endl;
    inorder(rt->left);

    if(rt==root)
    {
      if(!counter.empty())
      max1=*max_element(counter.begin(),counter.end());
      else
      max1=1;
      cout<<"max1 is"<<max1<<endl;
      counter.clear();
      rt->count=0;
      //c=0;
      counter.push_back(rt->count);
    }
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
  //  d->left=NULL;
  //  d->right=NULL;
  //  d->flag=NULL;
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
        d->parent=root;
        cout<<"inserted left"<<endl;
      }
      if(c=='R')
      {
        root->right=d;
        d->parent=root;
        cout<<"inserted right"<<endl;
        cout<<"Testee"<<endl;
      }
      //cout<<"root left is"<<root->left->info<<endl;
      //cout<<"Test"<<(v[0])->info<<"test "<<(v[1])->info<<endl;
    }
    else
    {
        cout<<"new node inserted"<<endl;
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
                d->parent=v[i];
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
                d->parent=v[i];
                cout<<"inserted right"<<endl;
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
  //cout<<v[2]->info<<"  "<<endl;
  //cout<<v[2]->right<<endl;
  //cout<<" "<<v[2]->left<<endl;
  //cout<<"Size of vector is"<<v.size()<<endl;
  cout<<"before inorder"<<endl;
  inorder(root);
  int max2=*max_element(counter.begin(),counter.end());
  cout<<"max2 is "<<max2<<endl;
  cout<<"final Answer is"<<(max1+max2)<<endl;
}
