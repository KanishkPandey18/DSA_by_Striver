#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==1){
        return n;
    }
    n=n+sum(n-1);
    return n;
}


int main(){
    int n ;
    cout << "Give a Number : ";
    cin >> n;
    int s = sum(n);
    cout << s ;
}