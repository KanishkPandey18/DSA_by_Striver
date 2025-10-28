#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>arr,int size,int k){
    int count = 0;
    unordered_map<int,int>mpp;
    mpp[0]++;
    int xr=0;
    for(int i =0;i<size;i++){
        xr=xr^arr[i];
        int rem =xr^k;
        if(mpp.find(rem)!=mpp.end()){
            count+=mpp[rem];
        }
        mpp[xr]++;
    }

    return count;
}

int main(){
    vector<int> arr1 = {1,2,3,1,1,1,1,3,3};
    int n1=arr1.size();
    cout << "XOR should be : " ;
    int sum;
    cin >> sum;
    int num = maxSubarray(arr1,n1,sum);
    cout <<"Number of Subarrays : " << num ;
    return 0;
}