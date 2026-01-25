#include<bits/stdc++.h>
using namespace std;

pair<int,int> peakElement(vector<vector<int>> matrix , int n , int m){
    int low = 0;
    int high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int maxi = INT_MIN;
        int index;
        for(int i=0;i<n;i++){
            if(maxi<matrix[i][mid]){
                maxi = matrix[i][mid];
                index = i;
            }
        }
        int left = mid-1 < 0 ? matrix[index][mid-1] : -1;
        int right = mid+1 > m-1 ? matrix[index][mid+1] : -1;
        if(maxi > left && maxi > right)return {index,mid};
        else if(maxi < left) high = mid-1;
        else low = mid+1;
    }
    return {-1,-1};
}

int main(){
    int target;
    vector<vector<int>>matrix = {
        {4,2,5,1,4,5},
        {2,9,3,2,3,2},
        {1,7,6,0,1,3},
        {3,6,2,3,7,2},
        {5,4,8,6,2,1}
    };
    pair<int,int> ans = peakElement(matrix,5,5);
    if(ans.first == -1) cout << "No" ;
    else cout << "Yes it does. On the index : [" <<ans.first+1 << "][" << ans.second+1<< "]";
}