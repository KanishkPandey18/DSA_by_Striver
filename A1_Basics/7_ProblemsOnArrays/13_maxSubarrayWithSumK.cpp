#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>arr,int size,int k){
    int maxLen = 0;
    map<int,int> mpp;
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum==k) maxLen = i+1;
        int rem = sum-k;
        if(mpp.find(rem)!=mpp.end()){
            maxLen=max(maxLen,i-mpp[rem]);
        }
        if(mpp.find(sum)==mpp.end())mpp[sum]=i;
        
    }
    return maxLen;
}

int main(){
    vector<int> arr1 = {3,3,1,1,1,1,2,3};
    int n1=arr1.size();
    cout << "Sum should be : " ;
    int sum;
    cin >> sum;
    int num = maxSubarray(arr1,n1,sum);
    cout <<"Length of maximum Subarray : " << num ;
    return 0;
}