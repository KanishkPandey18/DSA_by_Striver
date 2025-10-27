#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int input,flag=0 ;
    cout << "Give the Number to check : " ;
    cin >> input ;
    if(input<=1){
        cout << "It is not Prime";
    }
    else{
        for(int i = 2; i<input ; i++){
            if(input%i==0){
                cout << "It is not Prime";
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout << "It is Prime";
    }
}