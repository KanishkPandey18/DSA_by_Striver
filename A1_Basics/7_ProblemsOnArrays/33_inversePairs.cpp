#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high, vector <int> &arr){
    vector <int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{

            temp.push_back(arr[right]);
            right++;
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
    return;
}

int countTheInversePairs(int low,int mid , int high,vector<int> &arr){
    int cnt=0;
    int left=low;
    int right=mid+1;
    for(int i=left;i<=mid;i++){
        while(right <=high && arr[i]>2*arr[right]){
            right++;
        }
        cnt+=right-(mid+1);
    }
    return cnt;
}

int mergeSort(int low,int high, vector <int> &arr){
    int mid = (low+high)/2;
    int cnt=0;
    if(low<high){
    cnt+=mergeSort(low,mid,arr);
    cnt+=mergeSort(mid+1,high,arr);
    cnt+=countTheInversePairs(low,mid,high,arr);
    merge(low,mid,high,arr);
    return cnt;
    }
    else{
        return cnt;
    }
}


int main(){
    vector<int> arr = {40,25,19,12,9,6,2};
    int n=arr.size();
    int count = mergeSort(0,n-1,arr);
    cout << count <<endl;

    return 0;
}