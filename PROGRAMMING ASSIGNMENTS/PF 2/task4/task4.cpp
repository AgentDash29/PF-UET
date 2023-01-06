#include<iostream>
#include<string> 


using namespace std;	

main(){

float weight=0.45;
float pounds,kgs,converted;

cout<<"Enter The Weight In Pounds (lbs): ";
cin>>pounds;

converted=pounds*weight;
kgs=converted;

cout<<"Your Weight In KGS (kilograms): "<<kgs;


/*
float weight=2.22;
float pounds,kgs,converted;
cout<<"Enter The Weight In Kilograms (kgs): ";
cin>>kgs;
converted=kgs*weight;
pounds=converted;
cout<<"Your Weight In Pounds (lbs): "<<pounds;
 */
 
return 0;
}