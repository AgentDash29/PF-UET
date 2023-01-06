#include<iostream>

using namespace std;

void totalAmount(string day , int amount);

main(){

 int amount;
 string day;

while(true){
 cout<<"Enter Purchse Amount: ";

 cin>>amount;

 cout<<"Enter Day: ";

 cin>>day;

 totalAmount(day,amount);

}

}

void totalAmount(string day , int amount){

  if(day=="sunday"){
      
         int discount= amount-((amount*10)/100);
         cout<<"Total Payable Amount Is: "<<discount<<endl;
} 

if(day!="sunday")
{
  
         cout<<"Total Payable Amount Is: "<<amount<<endl;
} 
}