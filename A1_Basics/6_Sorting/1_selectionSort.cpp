#include<bits/stdc++.h>
using namespace std ;

void selectionSort(int arr[],int size){
    for(int i = 0 ; i < size-1 ; i++){
        int min = i ;
        for(int j = i ; j < size ; j++){
            if(arr[j]<arr[min]){
                min = j ;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
}

int main(){
    int size;
    cout << "No. of terms in array : " ;
    cin >> size ;
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cout << "value - " << i+1 << " : " ;
        cin >> arr[i];
    }
    selectionSort(arr,size);
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}