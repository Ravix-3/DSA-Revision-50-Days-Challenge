#include<iostream>
using namespace std;
void print_number(int i, int n){
  if(i<n)
  return ;
    print_number(i-1,n); // backtracking
    cout<< i <<"\n";
}

int main(){
  int n ;
  cout<<"Enter a number:";
  cin >> n;
  print_number(n,1);

  return 0;
}