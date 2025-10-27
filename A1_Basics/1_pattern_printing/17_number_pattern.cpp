//Print the number pattern.
#include<iostream>
using namespace std;

int main(){
    int n,i,x=1;
    cout << "Give number : ";
    cin >> n ;
    i=n;
    for(int r=1 ; r<=2*n-1 ; r++){
        for(int c=1; c<=2*n-1 ; c++){
            if(r==x || r == 2*n-x || c==x || c==2*n-x){
                cout << i;
            }
            else{
                i--;
                x++; 
            }
        }
        cout << "\n" ;
        
    }
}