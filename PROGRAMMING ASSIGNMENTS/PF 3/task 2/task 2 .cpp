#include <iostream>

using namespace std;

void ifPass(int marks);

main(){


  int number; 
while(true){
  cout<<"Enter Number: ";
  cin>>number;
  ifPass(number);
}

}


void ifPass(int marks){

  if(marks>50){

   cout<<"You Have Passed PF Quiz!!!!!"<<endl;
}

 if(marks==50){

   cout<<"Marks Are 50"<<endl;
}

 if(marks<50){

   cout<<"You Have Failed PF Quiz!!!"<<endl;
}

/*
  else{
     cout<<"Try Again!!!";
} 
*/
}