#include<iostream>
#include<vector>
using namespace std;
int print_sequence(int ind , vector<int> &ds , int s, int arr[],int n,int sum)
{
    if(ind == n){
        if(s == sum){
            return 1;
        }
        else return 0;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    int l = print_sequence(ind + 1, ds, s, arr, n, sum);
    ds.pop_back();
    s-=arr[ind];
    int r = print_sequence(ind + 1, ds, s, arr, n, sum);
    return l+r;
}

int main(){
  int arr[]={1,2,1};
  int n = 3;
  int sum = 2;
  vector<int> ds;
  cout << print_sequence(0 , ds , 0 , arr, n , sum);
  return 0;

}