//WAP to print a Hollow Box pattern.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a number : " ;
    cin >> n;
    for(int r=1 ; r<=n ; r++){
            for(int c=1;c<=n;c++){
                if(r==1 || r==n || c==1 || c==n){
                    cout << "*" ;
                    }
                else{
                    cout << " ";
                    }
                }
            cout << "\n" ;
        }
    }