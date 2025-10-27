#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[],int size){
    int large = 0;
    int sLarge=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>large){
            sLarge = large ;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>sLarge){
            sLarge=arr[i];
        }
    }
    return sLarge;
}

int main(){
    int size;
    cout << "Number of Elements : " ;
    cin >> size ;
    int arr[size];
    for(int i=0 ;i<size ; i++){
        cout << "Term - " << i+1 << " : ";
        cin >> arr[i];
    }
    int largest = largestElement(arr,size);
    cout << "largest Element is : " << largest ;
}