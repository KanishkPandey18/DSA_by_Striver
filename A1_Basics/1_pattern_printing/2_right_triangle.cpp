//WAP to create a pattern of right angled triangle.
#include<iostream>
using namespace std ;

int main(){                                 //using "*"
    for(int r=0 ; r<5 ; r++){
        for(int c=0 ; c<=r ; c++){
            cout << "*";
        }
        cout << "\n";
    }

    for(int r=1 ; r<=5 ; r++){              //using Numbers
        for(int  c=1; c<=r ; c++){
            cout << r;  
        }
        cout << "\n";
    }

}

