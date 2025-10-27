#include<bits/stdc++.h>
using namespace std ;

int factorial(int n){
    if(n==1){
        return n;
    }
    else{
        n=n*factorial(n-1);
        return n;
    }
}

int main(){
    int n,f;
    cout << "Give a Number : " ;
    cin >> n;
    f=factorial(n);
    cout << f ;
}