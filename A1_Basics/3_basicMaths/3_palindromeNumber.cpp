#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    cout << "Give the Number : " ;
    cin >> n ;
    num = n ;
    int rem = 0;
    while(n){
            rem = rem*10 + n%10 ;
            n=n/10;
        }
    if(rem==num){
        cout << "Number is Palindrome" ;
    }
    else{
        cout << "Number is not Palindrome";
    }
}