#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(int ind , vector<int> &ds, int arr[],int n){
  if(ind == n){
    if(ds.size()==0){
      cout << "{}";
    }
    else{
      for(int i = 0;i < ds.size();i++){
        cout << ds[i]<<" ";
      }
    }
    cout<<"\n";
    return;
  }
  
  // take
  ds.push_back(arr[ind]);
  print_subsequence(ind + 1, ds , arr, n);
  // not-take
  ds.pop_back();
  print_subsequence(ind + 1, ds , arr , n);
  }


int main(){
  int arr[]={3,1,2};
  int n = 3;
  vector<int> ds;
  print_subsequence(0, ds, arr, n);
  return 0;
}