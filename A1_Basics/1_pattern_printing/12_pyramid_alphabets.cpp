//WAP to print pyramid pattern using alphabets
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Give a number :" ;
    cin >> n;
    for(int r=1;r<=n;r++){
        char temp ='A';
        for(int c1=r ; c1<n ;c1++){
            cout<< " ";
        }
        for(int c2=1 ; c2<=2*r-1;c2++){
            cout << temp ;
            if(r<=c2){
                temp--;
            }
            else{
                temp++;
            }
            
        }
        cout<<"\n";
    }
}