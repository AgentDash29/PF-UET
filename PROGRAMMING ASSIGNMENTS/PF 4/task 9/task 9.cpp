#include<iostream>

using namespace std;

int multiplyBy5 (int number);

main(){

  int number;
  

  cout<<"Enter Number: ";
  cin>>number;

 int result = multiplyBy5 (number);

  cout<<"RESULT: "<<result;

}


int multiplyBy5 (int number){

  int no = number * 5;

  return no;

}