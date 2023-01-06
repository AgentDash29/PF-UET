#include<iostream>

using namespace std;

void greaterNumber(int number1, int number2);

main(){

 int number1, number2;

while(true){
 cout<<"Enter First Number: ";
 cin>>number1;

 cout<<"Enter Second Number: ";
 cin>>number2;

 greaterNumber(number1,number2);

}

}
void greaterNumber(int number1, int number2){

  if(number1>number2){

  cout<<"Number "<<number1<<" Is Greater Than Number "<<number2<<endl;

}


  if(number2>number1){

  cout<<"Number "<<number2<<" Is Greater Than Number "<<number1<<endl;

}

}