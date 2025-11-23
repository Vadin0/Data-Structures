#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int> arr,int target){
    int size=arr.size();
    for(int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
vector<int> arr={1,2,3,4,5,6,7,8,9};    
cout<<"your target is at the "<<linearsearch(arr,8)<<"th position in vector arr"<<endl;
}
