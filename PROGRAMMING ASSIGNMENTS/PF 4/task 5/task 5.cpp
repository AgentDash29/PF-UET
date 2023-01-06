#include<iostream>

using namespace std;

string numberName(int num);
string digitName(int digit);

main(){

   int number;

   cout<<"ENTER NUMBER: ";
   cin>>number;

     int digit = number % 10;
     int  num  = number - digit;  

   string numName = numberName(num);
   string digName = digitName(digit);

   cout<<numName<<" "<<digName;

}



string numberName(int num){
     string nameNumber;
     if(num == 10){
 
         nameNumber= "Ten";
     }

     if(num == 20){
 
         nameNumber= "Twenty";
     }

     if(num == 30){
 
         nameNumber= "Thirty";
     }

    if(num == 40){
 
         nameNumber= "Fourty";
     }

    if(num == 50){
 
         nameNumber= "Fifty";
     }

    if(num == 60){
 
         nameNumber="Sixty";
     }

    if(num == 70){
 
         nameNumber= "Seventy";
     }

    if(num == 80){
 
         nameNumber= "Eighty";
     }

    if(num == 90){
 
         nameNumber= "Ninty";
     }
      return nameNumber;
}

string digitName(int digit){

    string nameDigit;
  
     if(digit == 1){
 
         nameDigit= "One";
     }

     if(digit == 2){
 
         nameDigit= "Two";
     }

     if(digit == 3){
 
         nameDigit= "Three";
     }

    if(digit == 4){
 
         nameDigit= "Four";
     }

    if(digit == 5){
 
         nameDigit= "Five";
     }

    if(digit == 6){
 
         nameDigit= "Six";
     }

    if(digit == 7){
 
         nameDigit= "Seven";
     }

    if(digit == 8){
 
         nameDigit= "Eight";
     }

    if(digit == 9){
 
         nameDigit= "Nine";
     }

    return nameDigit;
}