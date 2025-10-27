#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i=0 ; i<size ; i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>0){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    } 
}

int main(){
    int size ;
    cout << "Number of elements : ";
    cin >> size ;
    int arr[size];
    for(int i=0 ; i<size ; i++){
        cout << "Value " << i+1 << " : " ;
        cin >> arr[i];
    }
    insertionSort(arr,size);
    for(int i = 0 ; i<size ; i++){
        cout<< arr[i] << " " ;
    }
}