#include<iostream>
#include<vector>
using namespace std;
void print_sequence(int ind , vector<int> &ds, int s , int arr[], int n , int sum){
if(ind == n)
{
    if(s == sum)
    {
        if(ds.size() == 0)
        {
            cout << "{}";
        }
        else
        {
            for(int i = 0; i < ds.size(); i++)
            {
                cout << ds[i] << " ";
            }
        }
        cout << "\n";
    }
    return;
}
  // take
  ds.push_back(arr[ind]);
  s+=arr[ind];
  print_sequence(ind + 1, ds, s, arr, n, sum);
  
  ds.pop_back();
  s-=arr[ind];
  print_sequence(ind + 1, ds , s, arr, n ,sum);

}

int main(){
  int n = 3;
  int arr[]={1,2,1};
  int sum = 2;
  vector<int> ds;
  print_sequence(0 ,ds , 0 , arr, n, sum);
}