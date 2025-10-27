//WAP to print a pattern in RAT using increasing alphabets
#include<iostream>
using namespace std;

int main(){
    int n ;
    cout << "Give a number : " ;
    cin >> n ;
    for(int r=1 ; r<=n ; r++){
        char temp = 'A';
        for(int c=r; c<=n ;c++){
            cout << temp ;
            temp++;
        }
        cout <<"\n";
    }
}