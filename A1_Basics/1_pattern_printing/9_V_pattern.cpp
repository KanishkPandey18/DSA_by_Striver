//WAP to print a V pattern using numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Give a number : ";
    cin >> n ;
    for(int r=1 ; r<=n ; r++){
        int temp = 1,temp1;
        for(int c1=1 ; c1 <= r ;c1++){
            cout << temp ;
            temp++;
            temp1=temp;
        }
        for(int c2=1 ; c2<=2*n-2*r ; c2++){
            cout << " " ;
        }
        for(int c3=1 ; c3<=r ; c3++){
            temp1--;
            cout << temp1 ;
        }
        cout << "\n" ;
    }
}