#include<bits/stdc++.h>
using namespace std;

void rotateArrayLeft1(vector <int> &arr,int size,int places){       //brute approach with TC-O(N^2),SC-(1)
    int d = (size%places)+1;
    while(d){
        int temp = arr[0];
        for(int i=1;i<size;i++){
            arr[i-1]=arr[i];
        }
        arr[size-1]=temp;
        d--;
    }
}
void rotateArrayLeft2(vector <int> &arr,int size,int places){       //better approach with TC-O(N+d),SC-(d)
    int d = places%size;
        int temp[d];
        for(int i=0; i<d ; i++){
            temp[i]=arr[i];
        }
        for(int i=d;i<size;i++){
            arr[i-d]=arr[i];
        }
        for(int i=size-d ; i<size ; i++){
            arr[i]=temp[i-(size-d)];
        }
        
}
void rotateArrayLeft3(vector <int> &arr,int size,int places){     //best approach with TC-O(2N),SC-(1)
    int d=places%size;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());

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
    cout << "By how many places you want to rotate the array : " ;
    cin >> places ;
    rotateArrayLeft3(arr,size,places);
    for(int i=0 ;i<size ; i++){
        cout << arr[i] << " ";
    }
}