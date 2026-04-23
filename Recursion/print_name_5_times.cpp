#include<iostream>
using namespace std;

void print_name(int n ,string name){
  if(n<=0)
   return;
    cout << name << "\n";
    print_name(n-1,name);
}

int main(){
  int n ;
  string name;
  cout << "Enter a number:";
  cin >> n;
  cout<<"Enter your name:";
  cin>>name;
  print_name(n,name);
  return 0;

}