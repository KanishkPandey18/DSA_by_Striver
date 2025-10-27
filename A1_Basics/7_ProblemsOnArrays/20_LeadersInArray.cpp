#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int> &arr,int size){
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=size-1;i>=0;i--){
        maxi = max(maxi,arr[i]);
        if(maxi==arr[i]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
};

int main(){
    vector<int> arr1 = {10, 22, 12, 3, 0, 6};
    int n1=arr1.size();
    vector<int> x = leadersInArray(arr1,n1);
    for(int i : x) cout << i<< " "; 
}