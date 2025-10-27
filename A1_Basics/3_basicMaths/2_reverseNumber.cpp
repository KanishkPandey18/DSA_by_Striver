#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int count = 0;
    int rem = 0;
    while(n){
            rem = rem*10 + n%10 ;
            n=n/10;
        }
        cout << rem ;
}