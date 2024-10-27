#include <iostream>
using namespace std;

int main() {
double num1 , num2 ;
cout<<"Enter the first number"<<endl;
cin>> num1;
cout<<"Enter the second number"<<endl;
cin>>num2;
double sum = num1+num2;
double mult= num1 * num2;
double sub= num1 - num2;
double divide=num1 / num2;
int operation;

cout<<"Enter the number of the operation"<<endl;
cout<<"1-Addition\n"<<"2-Subtraction\n"<<"3-Multiplication\n"<<"4-Division\n";
cin>>operation;
switch(operation){
  case 1:
  cout<<"The Sum = "<<sum;
  break;
  case 2:
  cout<<"The Subtraction = "<<sub;
  break;
  case 3:
  cout<<"The Multiply = "<<mult;
  break;
  case 4:
  cout<<"The Division = "<<divide;
  break;
  default:
  cout<<"invalid choice";
}
return 0;
}
