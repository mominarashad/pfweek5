#include<iostream>
using namespace std;
main()
{

string s1,s2,s3,s4,s5,s6,s7,s8,s9,s20,s30,s40,s50,s60,s70,s80,s90;
int number;
cout<<"enter the number";
cin>>number;
if(number/10==2)
{s20="twenty";}
if(number/10==3)
{s30="thirty";}
if(number/10==4)
{s40="fourty";}
if(number/10==5)
{s50=="fifty";}
if(number/10==6)
{s60="sixty";}
if(number/10==7)
{s70="seventy";}
if(number/10==8)
{s80="eighty";}
if(number/10==9)
{s90="ninty";}
if(number%10==1)
{s1="one";}
if(number%10==2)
{s2="two";}
if(number%10==3)
{s3="three";}
if(number%10==4)
{s4="four";}
if(number%10==5)
{s5="five";}
if(number%10==6)
{s6="six";}
if(number%10==7)
{s7="seven";}
if(number%10==8)
{s8="eight";}
if(number%10==9)
{s9="nine";}
string value=s20+s30+s40+s50+s60+s70+s80+s90+s1+s2+s3+s4+s5+s6+s7+s8+s9;
cout<<"the value is:"<<value<<endl;
}