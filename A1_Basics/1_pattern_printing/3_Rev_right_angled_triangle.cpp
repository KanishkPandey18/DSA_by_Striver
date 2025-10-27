//WAP to create a reversed right angled triangle.
#include<iostream>
using namespace std;

int main(){
    for(int r=1;r<=5;r++){                      //using "*"
        for(int c=5 ; c>=r ; c--){
            cout << "*";
        }
        cout << "\n";
    }


    for(int r=5;r>=1;r--){                      //using Numbers
        for(int c=1 ; c<=r ; c++){
            cout << c;
        }
        cout << "\n";
    }
}