#include<iostream>
#include<vector>
using namespace std;
bool print_sequence(int ind , vector<int> &ds , int s, int arr[],int n,int sum)
{
    if(ind == n){
        if(s == sum){
            return true;
        }
        else return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(print_sequence(ind + 1, ds, s, arr, n , sum)==true)
    {
        return true;
    }
    ds.pop_back();
    s-=arr[ind];
    if(print_sequence(ind + 1, ds, s, arr, n , sum)==true)
    {
        return true;
    }
    return false;
}

int main(){
  int arr[]={1,2,1};
  int n = 3;
  int sum = 2;
  vector<int> ds;
  cout << print_sequence(0 , ds , 0 , arr, n , sum);
  return 0;

}