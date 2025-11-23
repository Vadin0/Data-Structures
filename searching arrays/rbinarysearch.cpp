//binary search using recursion//
#include<iostream>
#include<vector>
using namespace std;

int recursivebinarysearch(vector<int> arr,int target,int st,int end){
if(st <= end){
    int mid=(st+end)/2;

    if (target>arr[mid]){
        return recursivebinarysearch(arr,target,mid+1,end);
    }

    else if(target<arr[mid]){
        return recursivebinarysearch(arr,target,st,mid-1);
    }

    else{
        return mid;
    }
}
  return -1;
}

int main(){
    vector<int> arr={-1,0,1,2,3,4,5,6,7};
    int target1=7;
    int  n=arr.size();
    cout<<"your target is at the "<<recursivebinarysearch(arr,target1,0,n)<<"th position in the vector arr"<<endl;
}