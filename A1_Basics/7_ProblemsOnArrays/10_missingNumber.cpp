#include<bits/stdc++.h>
using namespace std ;

// int missingNumber(vector<int>arr,int size){      with tc-2n
//     int xor1 = 0 , xor2=0 ;
//     for(int i=0 ; i<=size ; i++){
//         xor1^= i+1;
//     }
//     for(int i=0 ; i<size ; i++){
//         xor2^= arr[i];
//     }
//     return xor1^xor2;
// }

int missingNumber(vector<int>arr,int size){         //with tc-n
    int xor1 = 0 , xor2=0 ;
    for(int i=0 ; i<size ; i++){
        xor2^= arr[i];
        xor1^= i+1;
    }
    xor1 =xor1^(size+1);
    return xor1^xor2;
}

int main(){
    vector<int> arr1 = {4,2,3,5};
    int n1=arr1.size();
    int num = missingNumber(arr1,n1);
    cout <<"Missing number is : " << num ;
    return 0;    
}