#include<bits/stdc++.h>
using namespace std;

void merge2SortedArrays(vector<int> &arr1,int n,vector<int>&arr2,int m){
    int left = n-1;
    int right = 0;
    while(left>=0 && right <m){
        if(arr1[left]>arr2[right]){
            int temp=arr1[left];
            arr1[left]=arr2[right];
            arr2[right]=temp;
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

int main(){
    vector<int> arr1,arr2;
    arr1={1,3,5,7};
    arr2={0,2,6,8,9};
    merge2SortedArrays(arr1,arr1.size(),arr2,arr2.size());
    cout << "final Sorted Arrays: " << endl;
    for (auto i : arr1) cout << i;
    cout << endl;
    for (auto i : arr2) cout << i;
}