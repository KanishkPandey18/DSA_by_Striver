//WAP to print an 'X' pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Give number : " ;
    cin >> n ;
    for(int r=1;r<n ; r++){
        for(int c=1;c<=r;c++){
            cout<<"*" ;
        }
        for(int c1=r;c1<n;c1++){
            cout << "  " ;
        }
        for(int c2=1;c2<=r;c2++){
            cout << "*" ;
        }
        cout << "\n" ;
    }
    for(int r=1;r<=n;r++){
        for(int c=n;c>=r;c--){
            cout << "*" ;
        }
        for(int c1=1 ; c1<r ; c1++){
            cout << "  ";
        }
        for(int c2=n ; c2>=r ; c2--){
            cout<< "*" ;
        }
    cout << "\n" ;
    }
}