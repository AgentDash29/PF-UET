#include<iostream>
#include<cmath>

using namespace std;

float calculateX(float a , float b , float c);
float calculateXIs(float a , float b , float c);

main(){

  float a ;
  float b ;
  float c ;

  cout<<"Enter No1: ";
  cin>>a;

  cout<<"Enter No2: ";
  cin>>b;

  cout<<"Enter No3: ";
  cin>>c;

  float sol= calculateX(a,b,c);
  float res= calculateXIs(a,b,c);

  cout<<"Values Of X are: "<<sol<<" , "<<res;

}


float calculateX(float a , float b , float c){

      float squareB = pow(b,2); 
      float res = squareB - (4 * a * c);
      float sqRoot = sqrt(res);
      float result = ((-1 * b) + sqRoot) / (2 * a);
      return result;

}

float calculateXIs(float a , float b , float c){

      float squareB = pow(b,2); 
      float res = squareB - (4 * a * c);
      float sqRoot = sqrt(res);
      float result = ((-1 * b) - sqRoot) / (2 * a);
      return result;

}