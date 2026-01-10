#include<bits/stdc++.h>
using namespace std;

int check(int mid ,int n,int m){
    long long ans =1;
    for(int i=0 ; i<m ; i++){
        ans=ans*mid;
        if(ans > n) return 2;
    }
    if(ans==n) return 1;
    else if(ans<n) return 0;
}

int findPower(int n,int m){
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        int ans = check(mid,n,m);
        if(ans == 1 ) return mid ;
        else if(ans == 0) low = mid+1;
        else{
            high = mid-1;  
        }
    }
    return -1;
}

int main(){
    int n,m ;
    cout << "Give a Number and Power: ";
    cin >> n >> m;
    int ans = findPower(n,m);
    cout << "Peak element is :  " << ans ;
}