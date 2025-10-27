#include<bits/stdc++.h>
using namespace std; 

void print(int i, string name){
    if(i==0)
    return;
    else{
        cout << "Name-"<<i << " is : " << name <<endl;
        print(i-1,name);
    }
}

int main(){
    string name ;
    int n;
    cout << "How many times you want to Print : " ;
    cin >> n;
    cout << "Write your name: " ;
    cin >> name;
    print(n,name);
}