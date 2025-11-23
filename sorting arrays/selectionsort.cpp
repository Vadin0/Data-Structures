#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int smallest=i;
     for(int j=i+1; j < n ; j++ ){
          if(arr[j]<arr[smallest]){
            smallest=j;
          }
          swap(arr[i],arr[smallest]);
     }
     }
    }

    int main(){
        vector<int> arr1={7,6,5,4,23,12,1};
        selection_sort(arr1);
        for(int i=0;i<arr1.size();i++){
            cout<<arr1[i]<<" "; 
        }
    }
