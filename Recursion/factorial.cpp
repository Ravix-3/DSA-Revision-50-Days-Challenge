#include<iostream>
using namespace std;
// parameterised way to find the factorial of a number using recursion
void factorialParameterised(int number,int factorial )
{
  if(number < 1) {
    cout<<"The factorial of the number is: "<<factorial<<"\n";
    return;
  }
  return factorialParameterised(number - 1,factorial * number);
}
int factorialFunctional(int number)
{
  if(number == 1) return 1;
  return number * factorialFunctional(number - 1);
}
int main(){
  int number;
  cout<<"Enter a number: ";
  cin >> number;
  factorialParameterised(number,1);
  cout<<"The factorial of the number is: "<<factorialFunctional(number)<<"\n";

  return 0;
}