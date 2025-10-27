#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Give number : ";
    cin >> n ;
    char temp='A'+n;
    for(int r=1 ;r<=n ;r++){
        char temp1=temp-r;
        for(int c=1;c<=r;c++){
            cout << temp1;
            temp1++;
        }
        cout << "\n" ;
    }
}