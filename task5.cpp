#include<iostream>
using namespace std;

int character(string alphabet);
main()
{
string alphabet;
cout<<"enter the alphabet:";
cin>>alphabet;
character(alphabet);
}
int character(string alphabet)
{

if(alphabet=="A")
{cout<<"you have entered capital A";}
if(alphabet!="A")
{cout<<"you have entered small a";}
return 0;
}