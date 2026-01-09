#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>arr,int n){
    if(n==1)return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];
    int low=1;
    int high = n-2 ;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1] && arr[mid-1]<arr[mid]) return arr[mid];
        if(arr[mid-1]<arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    vector<int> arr = {10,9,8,7,6,5,4,3,2,1};
    int target ,n =arr.size();
    int ans = findPeakElement(arr,n);
    cout << "Peak element is :  " << ans ;
}