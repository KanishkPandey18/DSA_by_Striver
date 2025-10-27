//WAP to print a reversed pyramid pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a number : " ;
    cin >> n;
    for(int r=1 ; r<=n ; r++){
        for(int c1=1 ; c1<r ; c1++){
            cout << " " ;
        }
        for(int c2=2*n ; c2>(2*r-1) ; c2--){
            cout << "*" ;
        }
        cout << "\n" ;
    }
}