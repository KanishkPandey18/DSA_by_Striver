#include<bits/stdc++.h>
using namespace std;

int main(){
    int input ;
    cout << "Number Please : " ;
    cin >> input ;
    for(int i = 1 ; i <=(input/2)+1 ; i++){
        if(input%i==0){
            cout << i << "  ";
        }
    }
    cout << input ;
    
}