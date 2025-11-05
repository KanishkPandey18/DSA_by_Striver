#include<bits/stdc++.h>
using namespace std;

// int firstOccurance(vector<int> arr,int target){
//     int low = 0;
//     int high = arr.size()-1;
//     int ans = -1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]==target){
//             ans = mid;
//             high =mid-1;
//         }
//         else if(arr[mid]>target) {
//             high = mid-1;
//         }
//         else low = mid+1;
//     }
//     return ans;
// }

// int lastOccurance(vector<int> arr,int target){
//     int low = 0;
//     int high = arr.size()-1;
//     int ans = -1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]==target){
//             ans = mid;
//             low =mid+1;
//         }
//         else if(arr[mid]>target) {
//             high = mid-1;
//         }
//         else 
//             low=mid+1;
//     }
//     return ans;
// }

// pair <int,int> firstAndLast(vector<int> arr,int target){
//     int first = firstOccurance(arr,target);
//     int last = lastOccurance(arr,target);
//     if(first == -1) return {-1,-1};
//     else{
//         return {first,last};
//     }
// }


// -------------------------------------------   Method 2 : using lower and upper bounds   ----------------------------------

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

int upperBound(vector<int> arr,int target){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

pair <int,int> firstAndLast(vector<int> arr,int target){
    int first = lowerBound(arr,target);
    int last = upperBound(arr,target)-1;
    if(first == arr.size() || arr[first]!=target) return {-1,-1};
    else{
        return {first,last};
    }
}

int main(){
    vector <int> arr = {2,8,8,8,8,8,11,13};
    int target;
    cout << "What is the Target : ";
    cin >> target;
    pair<int,int> ans = firstAndLast(arr,target);
    cout << "The first and last are : " << ans.first  << " , " << ans.second;
    return 0;
}