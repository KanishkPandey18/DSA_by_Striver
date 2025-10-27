#include<bits/stdc++.h>
using namespace std ;

// void reverse1(int arr[],int size,int head = 0 ){
//     if(head==size){
//         return;
//     }
//     else{
//         reverse1(arr,size,head+1);
//         cout << arr[head] << " ";
//     }
// }
void reverse2(int i, int arr[] ,int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reverse2(i+1,arr,n);
}

int main(){
    int size;
    cout << "Give size of array : " ;
    cin >> size;
    int arr[size];
    for(int i = 0 ; i<size ;i++){
        cout << "value-" << i+1 << " : " ;
        cin >> arr[i];
    }
    // reverse1(arr,size);
    reverse2(0,arr,size);
    for(int i = 0 ; i<size ;i++){
        cout <<  arr[i] << " ";
    }
}