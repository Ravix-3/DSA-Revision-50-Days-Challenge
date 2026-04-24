#include<iostream>
using namespace std;
void reverse_array(int i,int arr[],int n){
  //  base case
  if(i > n/2) return;
  swap(arr[i],arr[n-i-1]);
  reverse_array(i+1,arr,n);
}

int main(){
  int n;
  int arr[10];
  cout <<"Enter the number n";
  cin >> n;
  for(int i = 0; i < n;i++){
    cin >> arr[i];
  }
  // reverse using without recursively
  // for(int i = 0; i < n/2;i++){
  //   int temp = arr[i];
  //   arr[i] = arr[n-i-1];
  //   arr[n-i-1] = temp;
  // }
  reverse_array(0,arr,n);
  for(int i = 0; i < n;i++){
    cout << arr[i] <<"\t";
  }
  return 0;
}