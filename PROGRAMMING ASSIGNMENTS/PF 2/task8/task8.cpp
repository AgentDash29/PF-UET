#include<iostream>

using namespace std;

main(){
 
float oneMB=1024*1024*8;

float megaBytes,bits;
float result;

cout<<"Enter The Value In MegaBytes: ";
cin>>megaBytes;

bits=oneMB*megaBytes;
result=bits;

cout<<"Answer In Bits Is:  "<<result;

}