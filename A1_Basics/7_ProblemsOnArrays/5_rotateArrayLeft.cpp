#include<bits/stdc++.h>
using namespace std;

void rotateArrayLeft(vector <int> &arr,int size){
    int temp = arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}

int main(){
    int size;
    cout << "Give size of array : " ;
    cin >> size ;
    vector <int> arr(size);
    for(int i=0 ;i<size ; i++){
        cout << "Term - " << i+1 << " : ";
        cin >> arr[i];
    }
    rotateArrayLeft(arr,size);
    for(int i=0 ;i<size ; i++){
        cout << arr[i] << " ";
    }
}