#include<iostream>
#include<cmath> 

using namespace std;

float calculateHeight(float base , float degrees);

main()
{
   float base;
   float degrees;
// float radians;


   cout<<"Enter Base: ";
   cin>>base;
  
   cout<<"Enter Angle In Degrees: ";
   cin>>degrees;

   calculateHeight(base, degrees);

}


float calculateHeight(float base , float degrees){

   float radians = 57.2958;
   float radian = degrees / radians;
   float angle;
   float height;

   angle = tan(radian);
   height = angle * base;

   cout<<"Height: "<<height;
   
   return height;
}