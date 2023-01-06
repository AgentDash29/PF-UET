#include <iostream>

using namespace std;

//Function Prototype
void isEligible(int age);


main()
{
 int age;
while(true){
 cout<<"Enter Your Age: ";
 cin>>age;

 isEligible(age);

}

}

void isEligible(int age)
{

  if(age>=18){
  cout<<"You Are Eligible \n";
}
  if(age<18){
   cout<<"You Are Not Eligible \n";
}

}