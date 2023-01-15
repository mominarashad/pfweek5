#include<iostream>
#include<cmath>
using namespace std;
bool issymmetrical(int num);

main()
{ int num;
  cout<<"enter the 3 digit num:";
  cin>>num;
  issymmetrical(num);
}
bool issymmetrical(int num)
{
 int rem1;
 int rem2;
 int rem3;
 int rem4;
 rem1=num%10;
 rem2=num/10;
 rem3=rem2%10;
 rem4=rem2/10;
if(rem1==rem4)
{cout<<"the num is symmetrical";}
if(rem1!=rem4)
{cout<<"the num is not symmetrical";}
return 0;
}
 