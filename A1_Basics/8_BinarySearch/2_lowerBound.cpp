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

int main(){
    vector <int> arr = {-1,0,3,5,9,12};
    int target;
    cout << "What is the Target : ";
    cin >> target;
    
    int x = lowerBound(arr,target);
    cout << "The index is : " << x ;
}