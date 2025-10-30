#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int merge(int low,int mid,int high, vector <int> &arr){
    vector <int>temp;
    int left=low;
    int right=mid+1;
    int cnt = 0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
            cnt+=(mid-left+1);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}

int mergeSort(int low,int high, vector <int> &arr){
    int cnt=0;
    int mid = (low+high)/2;
    if(low<high){
    cnt += mergeSort(low,mid,arr);
    cnt += mergeSort(mid+1,high,arr);
    cnt += merge(low,mid,high,arr);
    return cnt;
    }
    else{
        return cnt;
    }
}

int countTheInverse(int n,vector<int> arr){
    return mergeSort(0,n-1,arr);
}

int main(){
    vector<int> arr = {5,3,2,1,4,1};
    int n=arr.size();
    int count = countTheInverse(n,arr);
    cout << count <<endl;

    return 0;
}