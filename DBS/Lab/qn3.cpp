#include<iostream>
#include"qn3.h"
using namespace std;
int main()
{
  Matrix obj1,obj2;
  cout<<"Enter for matrix 1:";
  cin>>obj1;
  cout<<"Enter for matrix 2:";
  cin>>obj2;
  cout<<"Matrix 1:"<<endl;
  cout<<obj1;
  cout<<"Matrix 2:"<<endl;
  cout<<obj2;
  Matrix obj3;
  obj3=obj1+obj2;
  cout<<"The sum is:"<<endl;
  cout<<obj3;
  Matrix obj4;
  obj4=obj1-obj2;
  cout<<"The difference is:"<<endl;
  cout<<obj4;
  Matrix obj5;
  obj5=obj1*obj2;
  cout<<"The product is:"<<endl;
  cout<<obj5;
  int cons;
  cout<<"Enter a constant to multiply:";
  cin>>cons;
  Matrix obj6;
  obj6=obj1^cons;
  cout<<"Scalar multiplication of matrix 1:"<<endl;
  cout<<obj6;
  Matrix obj7;
  obj7=obj2^cons;
  cout<<"Scalar multiplication of matrix 2:"<<endl;
  cout<<obj7;
  return 0;
}
