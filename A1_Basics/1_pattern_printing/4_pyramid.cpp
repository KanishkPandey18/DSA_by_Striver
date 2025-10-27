//WAP to print Pyramid patterns using "*"
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Give number of rows : " ;
    cin >> n;
    for(int r = 1 ; r<=n ; r++ ){
        for(int c1=1 ; c1<=n-r ; c1++){
            cout << " ";
        }
        for(int c2=1 ; c2<=(2*r-1) ; c2++){
            cout << "*" ;
        }
        cout << "\n";
    }
}