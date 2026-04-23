#include<iostream>
using namespace std;

int count = 0;
void print_name(string name){
  // base case
    if(count == 5){
        return;
    }
  //  Recursive case
   else{
    cout << name << endl;
    count++;
    print_name(name);
   }
}

int main(){
  string name;
  cout<<"Enter your name:";
  cin>>name;
  print_name(name);
  return 0;

}