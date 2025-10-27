#include<bits/stdc++.h>
using namespace std;

int f(vector<int> &arr,int low,int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<high){
            i++;
        }
        while(arr[j]>arr[pivot] && j>low){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int partition = f(arr,low,high) ;
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}

int main(){
    int size ;
    cout << "Number of terms : " ;
    cin >> size;
    vector<int> arr(size);
    for(int i=0 ; i<size ; i++){
        cout << "Term - " << i+1 << " : " ;
        cin >> arr[i];
    }
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<< arr[i] << " " ;
    }
}