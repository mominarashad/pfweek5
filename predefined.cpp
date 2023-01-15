#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float num1;
  float num2;
  float power;
  int   square;
  float  roundoff;
  cout<<"enter the number 1:";
  cin>>num1;
  cout<<"enter the number 2:";
  cin>>num2;
  power=pow(num1,num2);
  square=sqrt(num1);
  roundoff=ceil(num1);
  cout<<"power is"<<power<<endl;
  cout<<"square root is"<<square<<endl;
  cout<<"round off value is"<<roundoff<<endl;
}