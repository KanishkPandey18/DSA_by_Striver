#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr,int target){
    int low = 0;
    int high = arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int maxNoOfOnes(vector<vector<int>>matrix , int m ,int n){
    int maxCnt = 0;
    int ans = -1;
    for(int i=0 ; i<m; i++){
        int cnt = n - lowerBound(matrix[i],1);
        if(maxCnt < cnt){
            maxCnt = cnt;
            ans = i;
        }
    }
    return ans ;
}

int main(){
    vector<vector<int>>matrix = {
        {0,0,1,1,1},
        {0,0,0,0,0},
        {0,1,1,1,1},
        {0,0,0,0,0},
        {1,1,1,1,1},
    };
    int ans = maxNoOfOnes(matrix,5,5);
    cout << "No. of max ones are in row : " <<ans+1 ;
}