#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int target){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){
    vector <int> arr = {-1,0,3,5,9,12};
    int target;
    cout << "What is the Target : ";
    cin >> target;
    
    int x = binarySearch(arr,target);
    cout << "The index is : " << x ;
}