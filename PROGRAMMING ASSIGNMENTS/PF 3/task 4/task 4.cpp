#include<iostream>

using namespace std;

void isEven(int number);

main(){

 	int number;

while(true){
     	cout<<"Enter Number: ";
	cin>>number;
        isEven(number);
}

}

void isEven(int number){
   
     int even =number%2;

   if(even==0){
  cout<<"Number "<<number<<" Is Even "<<endl;
}
   if(even!=0){
  cout<<"Number "<<number<<" Is Not Even "<<endl;
}
}
