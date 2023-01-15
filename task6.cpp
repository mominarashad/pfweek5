#include<iostream>
using namespace std;
bool calculate(int number);


main()
{
int number;
cout<<"enter any number:";
cin>>number;
bool sum=calculate(number);
if(sum==true)
{cout<<"number is evenish:";}
if(sum==false)
{cout<<"number is oddish..";}
}
bool calculate(int number)
{
int rem1=number%10;
int div1=number/10;
int rem2=div1%10;
int div2=div1/10;
int rem3=div2%10;
int div3=div2/10;
int rem4=div3%10;
int div4=div3/10;
int rem5=div4%10;
int div5=div4/10;
int sum=rem1+rem2+rem3;

if(sum%2==0)
{return true;}
if(sum%2!=0)
{return false;}
return 0;
}

