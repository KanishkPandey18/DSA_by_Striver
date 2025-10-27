#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr,int size,int value){
    for(int i=0 ;i<size; i++){
        if(arr[i]==value)return i;
    }
    return -1;
}

int main(){
    int size,value;
    cout << "Give size of array : " ;
    cin >> size ;
    vector <int> arr(size);
    for(int i=0 ;i<size ; i++){
        cout << "Term - " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "Which value you want to search : " ;
    cin >> value ;
    int index = linearSearch(arr,size,value);
    cout << "Your value is on " << index << "th index.";
}