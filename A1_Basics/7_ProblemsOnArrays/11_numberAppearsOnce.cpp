#include<bits/stdc++.h>
using namespace std;

int numberAppearsOnce(vector<int> arr,int size){
    int xor1=0;
    for(int i=0;i<size;i++){
        xor1 ^= arr[i];
    }   
    return xor1;
}

int main(){
    vector<int> arr1 = {1,1,2,2,5,5};
    int n1=arr1.size();
    int num = numberAppearsOnce(arr1,n1);
    cout <<"The number repeated once is : " << num ;
    return 0;
}