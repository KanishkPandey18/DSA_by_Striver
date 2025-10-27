#include<bits/stdc++.h>
using namespace std ;

int printFabonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return printFabonacci(n-1)+printFabonacci(n-2);
}

int main(){
    cout << printFabonacci(4);
}