#include<iostream>
using namespace std;
int fibonacci_number(int n){
    if(n <= 1) return n;
    int last_number = fibonacci_number(n-1);
    int secondlast_number = fibonacci_number(n-2);
    return last_number + secondlast_number;
}

int main(){
 int n;
 cout <<"Enter the nth position";
 cin  >> n;
 cout <<"The nth fibonacci number is "<< fibonacci_number(n);
 return 0;
}