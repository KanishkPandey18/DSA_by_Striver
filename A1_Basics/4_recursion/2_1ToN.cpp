#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0)
    return;
    else{
        print(n-1);
        cout << n << endl;
    }
}

// void printNto1(int n){
//     if(n==0)
//     return;
//     else{
//         cout << n << endl;
//         printNto1(n-1);
//     }
// }
int main(){
    int n;
    cout << "Till which number you want to print : " ;
    cin >> n ;
    print(n);
    // printNto1(n);
}