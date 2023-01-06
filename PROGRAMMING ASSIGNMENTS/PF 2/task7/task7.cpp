#include <iostream>
#include <string>
using namespace std;

main(){
  string name;
  float aggregate;
  float matric,inter,ecat,matricMarks,interMarks,ecatMarks;

cout<<"  ------------------------   "<<endl;
cout<<"    Aggregate Calculator     "<<endl;
cout<<"  ------------------------   "<<endl;

cout<<"Enter Your Name: ";
cin>>name;   

cout<<"Enter The Marks In Matric (out of 1100): ";
cin>>matric;   

cout<<"Enter The Marks In Inter (out of 550): ";
cin>>inter;   

cout<<"Enter The Marks In ECAT (out of 400): ";
cin>>ecat;   

matricMarks=((matric/1100)*10);
ecatMarks=((ecat/400)*50);
interMarks=((inter/550)*40);

aggregate=matricMarks+interMarks+ecatMarks;

cout<<"The Aggregate Of "<<name<<" "<<aggregate;
return 0;

}