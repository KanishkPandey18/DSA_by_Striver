#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low ,int mid , int high){
    int left = low , right = mid+1  ;
    vector<int> temparr;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temparr.push_back(arr[left]);
            left++; 
        }
        else{
            temparr.push_back(arr[right]); 
            right++;
        }
    }
    while(left<=mid){
        temparr.push_back(arr[left]);
        left++;
        }
    while(right<=high){
        temparr.push_back(arr[right]);
    right++;
    }
    for(int i=low ; i<=high ;i++){
        arr[i] = temparr[i-low];
    }
}


void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high)return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int size;
    cout << "Number of values : " ;
    cin >> size ;
    vector<int> arr(size);
    for(int i=0 ; i<size ; i++){
        cout << "Value - " << i+1 << " : " ;
        cin >> arr[i] ;
    }
    size = arr.size();
    mergeSort(arr,0,size-1);
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}