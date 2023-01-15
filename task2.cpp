#include<iostream>
#include<cmath>
using namespace std;
float quadpositive(int numa,int numb,int numc);
float quadneg(int numa,int numb,int numc);

main()
{
  int numa,numb,numc;
  float result1;
  float result2;
  cout<<"enter the number a:";
  cin>>numa;
   cout<<"enter the number b:";
  cin>>numb;
  cout<<"enter the number c:";
  cin>>numc;
  result1=quadpositive(numa,numb,numc);
  result2=quadneg(numa,numb,numc);
  cout<<"the value of x "<<result1<<endl;
  cout<<"the value of x "<<result2<<endl;
}

float quadpositive(int numa,int numb,int numc)
{
  float x=(numb*numb)-(4*numa*numc);
  float x1=sqrt(x);
  float x2=-numb+x1;
  float x3=x2/(2*numa);
  return x3;

}
float quadneg(int numa,int numb,int numc)
{
float x=(numb*numb)-(4*numa*numc);
  float x1=sqrt(x);
  float x2=-numb-x1;
  float x3=x2/(2*numa);
  return x3;
}

