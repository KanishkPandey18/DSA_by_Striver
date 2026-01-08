#include<bits/stdc++.h>
using namespace std;

int numberOfTimesArrayRotated(vector<int> arr,int n){
    int ans =-1;
    int low = 0;
    int high = n-1;
    int temp = INT_MAX;

    while(low<=high){
        int mid = (low+high)/2 ;

        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<temp){
                temp = arr[low];
                ans = low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<temp){
                ans=mid;
                temp = arr[mid];
            }
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {3,3,3,4,4,4,1,2,2,2,3,3,3,3};
    int target ,n =arr.size();
    int ans = numberOfTimesArrayRotated(arr,n);
    cout << "Array is Rotated " << ans  << " times.";

}