#include<iostream>
using namespace std;
float poolfill(float volumeofpool,float volume);
float poolpercent2(float volumeofpool,float volume);
float percentpipefill(float flowrate1,float volumefill);
float percentpipe(foat flowrate2,float volumefill);
main()
{
float volume;
int flowrate1;
int flowrate2;
float hours;
float volumeofpool;
float volumefill;
float pipefill1;
float pipefill2;
float overflow;
cout<<"enter the volume:";
cin>>volume;
cout<<"enter the flowrate1:";
cin>>flowrate1;
cout<<"enter the flowrate2:";
cin>>flowrate2;
cout<<"enter the hours:";
cin>>hours;
volumeofpool=(flowrate1+flowrate2)*hours;
if(voulmeofpool<=volume)
{
volumefill=poolfill(volumeofpool,volume);
pipefill1=percentpipefill(flowrate1,volumefill);
pipefill2=percentpipefill(flowrate2,volumefill);
cout<<"the pool is"<<voulmefill<<"% full. pipe1:"<<pipefill1<<"%. pipe2:"<<pipefill2<<"%.";
}
if(volumeofpool>volume)
{
overflow=poolpercent2(volumrofpool,volume);
cout<<"for"<<hours<<"hours the pool overflow with"<<overflow<<"liters.";
}

