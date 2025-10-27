#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0,n,num,rem=0;
    cout << "Give a Number : " ;
    cin >> n;
    num=n;
    while(n){
        n=n/10;
        count = count + 1; 
    }
    n=num;
    while(n){
        rem = rem+round(pow(n%10,count));
        n=n/10;
        cout << " n:" << n << "     rem : " << rem ;
    }
    cout << num <<endl;
    cout << rem <<endl ;
    cout << "count : "<< count <<endl ;
    if(rem==num){
        cout << "Yay!! Armstrong!" ;
    }
    else{
        cout << "Better Luck next time :(";
    }
}
