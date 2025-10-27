#include<bits/stdc++.h>
using namespace std ;

void zeroesInEnd(vector<int> &arr , int size){
    int j = 0,z=0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
        else{
            z++;
        }
    }
    for(int i = size-z ; i<size ; i++){
        arr[i]=0; 
    }
}

void zeroesInEnd2(vector<int> &arr, int size){
    int j=-1;
    for(int i=0 ; i<size ; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if(j==-1)return;
    for(int i=j+1;i<size;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}

int main(){
    int size,places;
    cout << "Give size of array : " ;
    cin >> size ;
    vector <int> arr(size);
    for(int i=0 ;i<size ; i++){
        cout << "Term - " << i+1 << " : ";
        cin >> arr[i];
    }
    zeroesInEnd2(arr,size);
    for(int i=0 ;i<size ; i++){
        cout << arr[i] << " ";
    }
}