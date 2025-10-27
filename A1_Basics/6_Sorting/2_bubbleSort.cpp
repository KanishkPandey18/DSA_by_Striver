#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=size-1 ; i>0 ; i--){
        int didswap = 0;
        for(int j=0 ; j<i ;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap = 1 ;
            }
        }
        if(didswap==0){
            break;
        }
    }
}

int main(){
    int size;
    cout << "Number of elements : " ;
    cin >> size ;
    int arr[size] ;
    for(int i=0 ; i<size ; i++){
        cout << "Value " << i+1 << " : ";
        cin >> arr[i];
    }
    bubbleSort(arr,size);
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " " ;
    }
}