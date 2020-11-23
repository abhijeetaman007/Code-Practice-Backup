#include<iostream>
#include<string>
using namespace std;
class product
{
  public:
  int id, qty, price;
  string name;
  product(){
      id = 0;
      qty = 0;
      price = 0;
  }
  void access(int i,int q,int p ,string n){
      id = i;
      qty = q;
      price = p;
      name = n;
  }
  void display(){
      cout<<"Product id:"<<id<<"\t";
      cout<<"Quantity:"<<qty<<"\t";
      cout<<"Price:"<<price<<"\t";
      cout<<"Name:"<<name<<"\n";
  }
};
class stock{
    public :product products[5]; 
    void update(){
        int id, qty, price;
        string n;
        for(int i = 0; i < 5;i++){
            cout<<"Enter Product ID:\n";
            cin>>id;
            cout<<"Enter Product Quantity:\n";
            cin>>qty;
            cout<<"Enter Product Price:\n";
            cin>>price;
            cout<<"Enter Product Name:\n";
            cin>>n;
            products[i].access(id,qty,price,n);
        }
        cout<<"The product details after updation are as follows:\n";
        for(int i = 0; i < 5;i++){
            products[i].display();
        }
    }
  };
    int main(){
        stock o;
        char k = 'y';
        while(k == 'y')
        {
            o.update();
            cout<<"Do you wish to continue?(y/n):\n";
            cin>>k;
        }
        return 0;
    }
