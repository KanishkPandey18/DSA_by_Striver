#include<bits/stdc++.h>
using namespace std;

int searchInRotatedDuplicates(vector<int> arr,int n,int target){
    int low= 0;
    int high = n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low = low+1;
            high = high-1;
        }
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
    vector<int> arr = {3,3,4,1,2,3,3,3};
    int target ,n =arr.size();
    cout << "Give the target to find : ";
    cin >> target;
    int ansD = searchInRotatedDuplicates(arr,n,target);
    if(ansD == -1){
        cout << "Target does not exist.";
    }
    else{
        cout << "Target does exist.";
    }
}