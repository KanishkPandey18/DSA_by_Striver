#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>arr,int x){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x)low = mid+1;
        else high = mid-1;
    }
    return low;
}

int check(vector<vector<int>>matrix , int n, int m, int mid){
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += upperBound(matrix[i],mid);
    }
    return cnt;
}

int medianElement(vector<vector<int>>matrix , int n, int m){
    int req = (n*m)/2;
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i=0 ; i<n ;i++){
        low = min(low,matrix[i][0]);
        high = max(high,matrix[i][m-1]);
    }
    while(low<=high){
        int mid = (low+high)/2;
        int smallerEquals = check(matrix,n,m,mid);
        if(smallerEquals <= req) low = mid+1;
        else high =mid-1;
    }
    return low;
}

int main(){
    vector<vector<int>>matrix = {
        {1,5,5,7,11},
        {2,4,5,6,10},
        {4,10,12,14,16}
    };
    int ans = medianElement(matrix,3,5);
    cout << "Median is : " << ans;
}