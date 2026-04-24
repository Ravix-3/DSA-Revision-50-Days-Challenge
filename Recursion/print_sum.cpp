#include<iostream>
using namespace std;
// parameterised way to find the sum of natural number using recursion
void sum_of_number(int number, int sum){
  if(number ==0){
    cout<<"The sum of the natural number is: "<<sum<<"\n";
    return;
  }
  return sum_of_number(number - 1, sum + number);

}
// functional way to find the sum of natural number using recursion
int sumfunctional(int number){
  if(number == 0) return 0;
  return number + sumfunctional(number - 1);
}
int main(){
  int number;
  cout<<"Enter a number: ";
  cin >> number;
  sum_of_number(number,0);

  return 0;
}