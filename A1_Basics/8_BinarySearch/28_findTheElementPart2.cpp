#include<bits/stdc++.h>
using namespace std;

pair<int,int> doesItExists(vector<vector<int>>matrix,int n ,int m,int target){
    int row = 0;
    int col = m-1;
    while(row<n && col<m){
        if(matrix[row][col] == target) return {row,col};
        else if(matrix[row][col] < target) row++;
        else col--;
    }
    return {-1,-1};
}

int main(){
    int target;
    vector<vector<int>>matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    cout<< "Give an element to search : ";
    cin >> target;
    pair<int,int> ans = doesItExists(matrix,5,5,target);
    if(ans.first == -1) cout << "No" ;
    else cout << "Yes it does. On the index : [" <<ans.first+1 << "][" << ans.second+1 << "]";
}