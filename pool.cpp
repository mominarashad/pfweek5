# include<iostream>
# include<cmath>
using namespace std;

float  poolFill(float  volumeOfPool , float  volume);
float  poolPercent2( float  volumeOfPool , float  volume );
float  percentPipeFill( float  flowP1 ,  float  volumeOfPool);
float  percentPipe( float  flowP2 , float  volumeOfPool);


main()
{
 float   volume;
 float  flowRateP1;
 float  flowRateP2;
 float  hours ;
 float  volumeOfPool;
 float  volumeFill;
 float   pipeFill1;
 float  pipeFill2;
 float  overFlow;
 float  flowP1;
 float   flowP2;
 cout<<"entre volume of pool...";
 cin>>volume;
 cout<<"entre flow rate of p1 ..";
 cin>>flowRateP1;
 cout<<"entre flow rate of p2 ..";
 cin>>flowRateP2;
 cout<<"entre hours ...";
 cin>>hours;
 volumeOfPool = (flowRateP1 + flowRateP2 )*hours;
 flowP1 = flowRateP1 *hours;
 flowP2 = flowRateP2 * hours;
    if( volumeOfPool <= volume)
{
  volumeFill = poolFill( volumeOfPool , volume);
  pipeFill1 =  percentPipeFill(  flowP1, volumeOfPool);
  pipeFill2 =  percentPipe( flowP2 , volumeOfPool);
  volumeFill = floor(volumeFill);
  pipeFill1 = floor(pipeFill1);
  pipeFill2 = floor(pipeFill2);
  cout<<"The pool is "<<volumeFill<<"% full. Pipe 1:"<<pipeFill1<<"%. Pipe 2: "<<pipeFill2<<"%.";
}
  if(volumeOfPool > volume)
 {
  overFlow = poolPercent2(  volumeOfPool , volume );
  cout<<"For "<<hours<<" hours the pool overflows with"<< overFlow<<" liters.";
 }
}

float  poolFill(float  volumeOfPool , float  volume)
{
   float   percentPool;
   percentPool = (volumeOfPool/volume)*100;
   return percentPool;
}
 float  percentPipeFill(float  flowP1 ,float  volumeOfPool)
{
  float  percentPipe1;
   percentPipe1 =  (flowP1 / volumeOfPool) *100 ;
   return percentPipe1;
}
 float  percentPipe(float  flowP2 ,float  volumeOfPool)
{
   float  percentPipe2;
  percentPipe2 =   (flowP2 / volumeOfPool) * 100; 
   return percentPipe2; 
 }

float  poolPercent2(float  volumeOfPool ,float  volume )
{
  float  overflow;
    overflow = volumeOfPool - volume;
    return overflow;
    
}