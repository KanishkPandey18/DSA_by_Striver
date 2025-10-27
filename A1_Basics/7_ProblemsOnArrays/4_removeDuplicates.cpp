#include<bits/stdc++.h>
using namespace std ;

void removeDuplicates(vector<int> &arr ,int size){
    int i=0;
    for(int j=1 ; j<size ; j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
}

int main(){
    int size;
    cout << "Number of Elements : " ;
    cin >> size ;
    vector <int> arr(size);
    for(int i=0 ;i<size ; i++){
        cout << "Term - " << i+1 << " : ";
        cin >> arr[i];
    }
    removeDuplicates(arr,size);
    for(int i=0 ;i<size ; i++){
        cout << arr[i] << " ";
    }
}