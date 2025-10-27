#include<bits/stdc++.h>
using namespace std;

int numberOfSubarray(vector<int>arr,int sum){
    map<int,int> mpp;
    mpp[0]=1;
    int presum=0,count=0;
    for(int i=0;i<arr.size();i++){
        presum+=arr[i];
        int remove=presum-sum;
        count+=mpp[remove];
        mpp[presum]+=1;
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3} ;
    cout << "What sum do You want : ";
    int sum;
    cin >>sum; 
    int n = numberOfSubarray(arr,sum);
    cout << "Total Number of subarrays are : " << n;
}