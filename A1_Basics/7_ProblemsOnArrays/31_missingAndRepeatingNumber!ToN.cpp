#include <bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeating(vector <int>arr,int n){
    long long sn = n*(n+1)/2;
    long long s2n =n*(n+1)*(2*n+1)/6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=arr[i]*arr[i];
    }
    int val1=sn-s;
    int val2=s2n-s2;
    val2=val2/val1;
    int x=(val1+val2)/2;
    int y=x-val1;
    return {x,y};
}

int main(){
    vector<int> arr = {3,2,4,5,1,1};
    vector<int> ans= missingAndRepeating(arr,arr.size());
    cout << "Repeating Number is : " << ans[1] << endl ;
    cout << "Missing Number is : " << ans[0] << endl ;
}