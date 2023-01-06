#include<iostream>
#include<cmath>

using namespace std;

bool symmetery(int number);

main(){

  int number;

  cout<<"Enter Number: ";
  cin>>number;

// int boolean = symmetery(number);

  cout<<symmetery(number);


}

bool symmetery(int number){

   int rem1 = number % 10;
   int quo1 = number / 10;

   int rem2 = quo1 % 10;
   int quo2 = quo1 / 10;

   int rem3 = quo2 % 10;
  
  if(rem1==rem3){
          
          return true;     

   }
   if(rem1!=rem3){
          
          return false;     

   }