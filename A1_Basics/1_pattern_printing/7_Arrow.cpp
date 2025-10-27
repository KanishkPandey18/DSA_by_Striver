//WAP to print an arrow using *
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a number : " ;
    cin >> n ;
    for(int r=1 ; r<=n ; r++){
        for(int c1=1; c1<=r ; c1++){
            cout << "*" ;
        }
        cout << "\n" ;
    }
    for(int r=1 ; r<n ; r++ ){
        for(int c1=n-1 ; c1>=r ; c1--){
            cout << "*" ;
        }
        cout << "\n" ;
    }
}