#include<iostream>
#include<vector>
using namespace std;
// //bubble sort is sorting method to sort array or vector in asc or desc order
// //there are n-1 iterations
// in 1st iteration of array[4,1,5,2,3]
// 4 and 1 gets compared and swaped then 4 and 5 then 5 and 2 and so on
void bubblesort(vector<int> &arr){
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j+1]<arr[j]){
                    swap(arr[j],arr[j+1]);
                    
                }
            }
        }
}

int main(){
    vector<int> arr={9,4,6,2,4,6,8,2};
    cout<<"your sorted array is"<<endl;
   bubblesort(arr);
   int n=arr.size();
   for(int i=-0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}