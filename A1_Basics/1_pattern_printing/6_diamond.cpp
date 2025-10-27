//WAP to print a diamond shape using "*"
#include<iostream>
using namespace std ;

int main(){
    int n;
    cout << "Give a number : ";
    cin >> n;
    for(int r=1 ; r<= n/2 ; r++){
        for(int c1=r ; c1<n/2 ; c1++){
            cout << " " ;
        }
        for(int c2=1 ; c2<2*r ; c2++){
            cout <<"*" ;
        }
        cout << "\n" ;
    }
    for(int r=1 ; r<= n/2-1 ; r++){
        for(int c1=1 ; c1<=r ; c1++){
            cout << " " ;
        }
        for(int c2=2*r-1 ; c2<2*(n/2-1) ; c2++){
            cout <<"*" ;
        }
        cout << "\n" ;
    }
}