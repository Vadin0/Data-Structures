#include<iostream>
#include<vector>
using namespace std;

int binarysearch( vector<int> arr,int target){
int st=0;int end=arr.size()-1;
int mid;
while(st<=end) {
    int mid = (st + end)/2;
    if(target>arr[mid]){
        st=mid+1;
    }
    else if(target==arr[mid]){
        return mid;
    }
    else {
        end=mid-1;
    }
}
return -1;
}

int main(){
    vector<int> example = {1,2,3,4,5,6,7,8,9};
    int x=6;//target//
    cout<<"your target is on the"<<binarysearch(example,x)<<"th position"<<endl;
}