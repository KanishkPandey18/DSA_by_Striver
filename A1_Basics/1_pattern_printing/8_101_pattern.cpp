//WAP to print a pattern of 101 in a right triangle
#include<iostream>
using namespace std;

int main(){
    int n,start;
    cout<< "Give a Number : " ;
    cin >> n ;
    for(int r=1 ; r<=n ; r++){
        if(r%2==0)
        start = 0;
        else
        start = 1 ;
        for(int c=1 ; c<=r ; c++){
            cout << start;
            start = 1-start ;
        }
        cout << "\n" ;
    }
}