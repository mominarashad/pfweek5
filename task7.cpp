#include<iostream>
using namespace std;
int time1(int hours,int min);
main()
{
int hours;
int min;
int time;
cout<<"enter the time in hours:";
cin>>hours;
cout<<"enter the time in min:";
cin>>min;
time=time1(hours,min);

}
int time1(int hours,int min)
{
int min1=min;
int time;
min1=min1+15;
if(min1>59 && hours<23)
{
hours=hours+1;
min1=min1-60;
}
{cout<<"time after 15 min is:"<<hours<<":"<<min1<<endl;
return time;
}
}
