#include<bits/stdc++.h>
using namespace std;

int searchInRotated(vector<int> arr,int n,int target){
    int low= 0;
    int high = n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        //left sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        else{
            if(arr[mid]<target && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> arr = {7,8,1,2,3,4,5,6};
    int target ,n =arr.size();
    cout << "Give the target to find : ";
    cin >> target;
    int ans = searchInRotated(arr,n,target);
    cout << "Taget is on index = " << ans <<endl;
}