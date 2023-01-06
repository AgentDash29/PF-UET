#include<iostream>

using namespace std;

int checkNumber(int number);

main(){

   int number;
   
   cout<<"Enter Number: ";
   cin>>number;
  
   int no =checkNumber(number); 

   cout<<no;


}

int checkNumber(int number){


   int rem1 = number % 10;
   int quo1 = number / 10;

   int rem2 = quo1 % 10;
   int quo2 = quo1 / 10;

   int rem3 = quo2 % 10;
   int quo3 = quo2 / 10;

   int rem4 = quo3 % 10;
   int quo4 = quo3 / 10;

   int rem5 = quo4 % 10;

   int sum = rem1 + rem2 + rem3 + rem4 + rem5;

   if(sum % 2 == 0 ){

   cout<<"Number Is Evenish";
  }

   if(sum % 2 != 0 ){

   cout<<"Number Is Oddish";
  }
 
     return 0;
}