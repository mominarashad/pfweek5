#include<iostream>
using namespace std;
void result(int num);
main()

{
int num;
cout<<"enter the number";
cin>>num;
result(num);
}
void result(int num)
{
int multiply=num*5;
cout<<"the result is"<<multiply<<endl;
}
