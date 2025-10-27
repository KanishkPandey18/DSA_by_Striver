#include<bits/stdc++.h>
using namespace std ; 

void ifPalindrome(string s,int i=0){
    int n = s.length();
    if(i>=n/2){
        cout << "true";
        return;
    }
    if(s[i]!=s[n-i-1]){ 
        cout << "false";
        return ;
    }
    ifPalindrome(s,i+1);
}

int main(){
    string s = "lolol";
    ifPalindrome(s); 
}