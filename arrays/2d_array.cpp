//ways of making 2d arrays//
#include<iostream>
using namespace std;

void printArray(int A[2][3]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int A[2][3]={{1,2,3},{4,5,6}};
    printArray(A);

    int *B[3];
    B[0]=new int[4];
    B[1]=new int[4];
}