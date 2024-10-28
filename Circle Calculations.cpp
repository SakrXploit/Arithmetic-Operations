#include <iostream>
using namespace std;
int main(){
  double radius;
  double pi = 3.14159;
  cout<<"Enter radius\n";
  cin>>radius;
  double circum = 2 * pi * radius;
  double area= pi * radius * radius;
  cout<<"Area = "<<area<<"\n"<<"circumference = "<<circum;
  return 0;
}