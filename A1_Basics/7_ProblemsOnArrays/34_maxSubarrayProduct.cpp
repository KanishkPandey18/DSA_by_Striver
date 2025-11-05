#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>arr,int size,int k){
    int pre = 1;
    int suf = 1;
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(pre==0)pre=1;
        if(suf==0)suf=1;
        pre *= arr[i];
        suf *= arr[size-i-1];
        max(maxi,max(pre,suf));
    }
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