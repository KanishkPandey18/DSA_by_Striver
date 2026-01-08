#include<bits/stdc++.h>
using namespace std;

int minimumInRotated(vector<int> arr,int n){
    int temp = INT_MAX;
    int low= 0;
    int high = n-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[low]==arr[mid] && arr[mid] == arr[high]){
            low=low+1;
            high=high-1;
        }

        //left sorted
        if(arr[low]<=arr[mid]){
            temp = min(temp, arr[low]);
            low = mid + 1;
        }
        //right sorted
        else{
            temp = min(temp, arr[mid]);
            high = mid - 1;
        }
    }
    return temp;
}

int main(){
    vector<int> arr = {3,3,4,5,1,2,3,3,3};
    int target ,n =arr.size();
    int ans = minimumInRotated(arr,n);
    cout << "Minimum is = " << ans ;
}