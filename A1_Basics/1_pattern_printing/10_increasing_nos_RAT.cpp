//WAP to print a pattern in increasing order of numbers and alphabets
#include<iostream>
using namespace std;

int main(){
    int n;
    int temp=1;
    cout << "Give a number : " ;
    cin >> n ;
    for(int r=1 ; r<=n ; r++){              //using Numbers
        for(int  c=1; c<=r ; c++){
            cout << temp << " ";
            temp++;  
        }
        cout << "\n";
    }
}