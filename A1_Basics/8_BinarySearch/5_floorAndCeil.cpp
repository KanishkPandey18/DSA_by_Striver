#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> arr,int target){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=target) {
            ans = mid;
            low = mid+1;
        }
        else 
            high = mid-1;
    }
    return (ans==-1)? -1 : arr[ans];
}

int ceil(vector<int> arr,int target){
    int low = 0;
    int high = arr.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target) {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return (ans==-1)? -1 : arr[ans];
}

int main(){
    vector <int> arr = {-1,0,3,5,9,12};
    int target;
    cout << "What is the Target : ";
    cin >> target;
    
    int x = floor(arr,target);
    int y = ceil(arr,target);
    cout << "The floor and ceil are : " << x  << " , " << y;
}