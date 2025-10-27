//WAP to print a diamond shape using "*".
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a number : ";
    cin >> n;
    for(int r1=1 ;r1<=n ;r1++){
        for(int c=n;c>=r1;c--){
            cout << "*" ;
        }
        for(int c1=1;c1<=2*r1-2 ;c1++){
            cout <<" " ;
        }
        for(int c2=n;c2>=r1;c2--){
            cout << "*" ;
        }
        cout <<"\n" ;
    }
    for(int r2=1;r2<=n;r2++){
        for(int c=1;c<=r2;c++){
            cout << "*" ;
        }
        for(int c1=2*n ; c1>2*r2 ;c1--){
            cout << " " ;
        }
        for(int c2=1;c2<=r2 ;c2++){
            cout << "*" ;
        }
        cout << "\n" ;
    }
}