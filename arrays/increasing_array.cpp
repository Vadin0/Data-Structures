//increasing size of an array//
#include<iostream>
using namespace std;

int main(){
    int *p=new int[5];
    int *q=new int[10];
    cout<<"enter values of array"<<endl;
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete[]p;
    p=q;
    q=NULL;
    cout<<"increased array is"<<endl;

    for(int i=0;i<10;i++){
        cout<<p[i];
    }
    return 0;
}