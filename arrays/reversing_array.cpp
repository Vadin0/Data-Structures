#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int>& arr){
    int st=0;
    int end=arr.size()-1;
      for(int i=0;i<end;i++){
    swap(arr[st],arr[end]);
    st++;end--;
 }   
}

int main(){
    vector<int> arr1={1,2,3,4,5,6,7,8,9};
    cout<<"your reversed array is"<<endl;
    reversearray(arr1);
    
   for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
   }
}