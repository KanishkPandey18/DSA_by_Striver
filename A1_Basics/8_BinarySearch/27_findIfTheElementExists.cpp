#include<bits/stdc++.h>
using namespace std;

int doesItExists(vector<vector<int>>matrix,int n ,int m,int target){
    int low = 0;
    int high = (n*m)-1;
    while(low<=high){
        int mid = (low+high)/2;
        int r = mid/m;
        int c = mid%m;
        if(matrix[r][c]<target)low=mid+1;
        else if(matrix[r][c]>target)high=mid-1;
        else return mid;
    }
    return -1;
}

int main(){
    int target;
    vector<vector<int>>matrix = {
        {3,4,6,8},
        {10,12,13,15},
        {17,18,19,20},
        {21,23,29,30}
    };
    cout<< "Give an element to search : ";
    cin >> target;
    int ans = doesItExists(matrix,4,4,target);
    if(ans == -1) cout << "No" ;
    else cout << "Yes it does"  ;
}