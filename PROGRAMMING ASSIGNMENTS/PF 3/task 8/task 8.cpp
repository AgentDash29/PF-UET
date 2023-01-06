#include <iostream>

using namespace std;

//Function Prototype
void yourName(string name);

main()
{

 yourName("Salman");
 string name="Noman";
 yourName(name);

 string anotherName;
 cout<<"Enter Name: ";
 cin>>anotherName;

 yourName(anotherName);

}
//Function Defination
void yourName(string name){
  cout<< "Your Name: "<<name<<endl;
}