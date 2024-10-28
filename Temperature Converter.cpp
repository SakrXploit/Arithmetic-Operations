#include <iostream>
using namespace std;
int main(){
  cout <<"This program that converts a temperature given in Celsius to Fahrenheit or vice versa\n";
  double C,F;
  int Choice;
  cout<<"which service do you want\n"<<"1-Celsius to Fahrenheit\n"<<"2-Fahrenheit to celsius\n";
  cin >>Choice;
  switch(Choice){
    case 1:
    cout<<"Enter the temprature in Celsius\n";
    cin>>C;
    F = C * 9/5 + 32;
    cout<<"The temprature in Fahrenheit is "<<F;
    break;
    case 2:
    cout<<"Enter the temprature in Fahrenheit\n";
    cin>>F;
    C= (F - 32) * 5/9;
    cout<<"The temprature in Celsius is "<<C;
    break;
    default:
    cout<<"invalid choice ";
    break;
  }
return 0;
}