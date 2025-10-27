#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>arr,int size,int k){
    int left=0,right=0,maxLen=0;
    long long sum=arr[0];
    while(right<size){
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<size)sum+=arr[right];
    }
    return maxLen;
}

int main(){
    vector<int> arr1 = {1,2,3,1,1,1,1,3,3};
    int n1=arr1.size();
    cout << "Sum should be : " ;
    int sum;
    cin >> sum;
    int num = maxSubarray(arr1,n1,sum);
    cout <<"Length of maximum Subarray : " << num ;
    return 0;
}