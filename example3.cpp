#include<iostream>
using namespace std;
int add(int num1,int num2);
int max(int num1,int num2);
main()
{
int num1;
int num2;
int greater;
int total;

cout<<"enter the number 1:";
cin>>num1;
cout<<"enter the number 2:";
cin>>num2;
greater=max(num1,num2);
cout<<"max num is "<<greater<<endl;
total=add(num1,num2);
cout<<"sum is "<<total<<endl;
}



int add(int num1,int num2)
{
int sum;
sum=num1+num2;
return sum;
}
int max(int num1,int num2)
{
if(num1>num2)
{return num1;
}
if(num2>num1)
{
return num2;}
return 0;
}