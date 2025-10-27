#include<bits/stdc++.h>
using namespace std;

string checkSorted(vector<int> &arr,int size){
    for(int i = 0 ; i<size-1 ; i++){
        if(arr[i]<=arr[i+1]){

        }
        else{
            return "Not Sorted" ;
        }
    }
    return "Sorted";

}

int main(){
    int size ;
    cout << "Number of Elements : " ;
    cin >> size ;
    vector<int> arr(size) ;
    for(int i = 0 ; i<size ; i++){
        cout << "Term - " << i+1 << " : " ;
        cin >> arr[i] ;
    }
    cout << checkSorted(arr,size);
}