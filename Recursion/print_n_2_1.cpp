#include<iostream>
using namespace std;
void print_number1(int n){
  if(n<=0)
    return;
  
    cout << n << endl;
    print_number1(n-1);

}

void print_number2(int i , int n){
  if(i<n)
    return;

    cout << i << endl;
    print_number2(i-1,n);
  
}

int main(){
  int n;
  cout<<"Enter a number:";
  cin >> n;
  print_number1(n);
  print_number2(n,1);

  return 0;
}