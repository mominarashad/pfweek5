#include<iostream>
using namespace std;
int add(int num1,int num2);
float division(int num1,int num2);
main()
{
int num1;
int num2;
int total;
int result;
cout<<"enter the number 1:";
cin>>num1;
cout<<"enter the number 2:";
cin>>num2;
total=add(num1,num2);
cout<<"sum is"<<total<<endl;
result=division(num1,num2);
cout<<"ans is"<<result<<endl;
cout<<"program end!";
}
int add(int num1,int num2)
{
int sum;
sum=num1+num2;
return sum;
}
float division(int num1,int num2)
{
float div=num1/num2;
return div;
}