#include<bits/stdc++.h>
using namespace std ;

int main(){
    int size ;
    cout << "size of array : ";
    cin >> size ;
    int arr[size] = {0};
    for(int i = 0 ; i<size ; i++){
        cout << "number" << i+1 << ":" ;
        cin >> arr[i];
    }

    //pre compute :
    map<int,int> mpp ;
    for(int i=0 ; i<size ; i++){
        mpp[arr[i]] = mpp[arr[i]]+1;
    }

    int times ;
    cout << "How many times you want to count number : ";
    cin >> times ;
    for(int i = 0 ; i <times ; i++){
        int n ;
        cout << "which number you want to count : ";
        cin >> n ;
        cout << mpp[n] << endl;
    }
}