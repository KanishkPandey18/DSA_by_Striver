#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>arr,int size){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    ans.push_back(arr[0]);
    for(int i=1;i<size;i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(ans.back()[1]>=start){
            ans.back()[1]= max(ans.back()[1],end);
        }
        else{
            ans.push_back({start,end});
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr;
    arr={
        {1,3},{2,6},{9,11},{8,10},{2,4},{15,18},{16,17}
    };
    vector<vector<int>> ans = mergeOverlappingIntervals(arr,arr.size());
    cout << "Merged Intervals: " << endl;
    for (auto &interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;
}