#include<iostream>
#include<cmaths>
using namespace std;
float calculateheight(float distance,float degree);

main()
{
  float degree;
  float distance;
 
  float height;
  cout<<"enter the angle:";
  cin>>degree;
  cout<<"enter the height:";
  cin>>distance;
  height=calculateheight(distance,degree);  
  cout<<"height of the tree is"<<height<<endl;
 }
float calculateheight(float distance,float degree)
{
   float radian=57.2958;
   float radians;
   float angle;
   radians=degree/radian;
   angle=tan(radians);
   height=angle*distance;
   return height;
}
   
   