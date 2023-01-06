#include<iostream>

using namespace std;

int calculateTime(int hours, int minutes);
 
main(){

  int hours , minutes;

  cout<< "Enter Hours (0-23): ";
  cin>>hours;

  cout<< "Enter Minutes (0-59): ";
  cin>>minutes;
 
  int time = calculateTime(hours , minutes);

  cout<<time;
  
}

int calculateTime(int hours, int minutes){

    
   minutes = minutes + 15;

  if(minutes > 59){

     hours ++;
     minutes = minutes-60;
}

  if(hours > 23){

       hours = hours-24;
}

   cout << "The time after 15 minutes will be " << hours << ":" << minutes << endl;
   return 0;
}