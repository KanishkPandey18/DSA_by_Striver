#include<bits/stdc++.h>
using namespace std;

void maxProfit(vector<int> &arr,int size){
    vector<int> ans;
    int k=-1;
    for(int i=size-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            k=i;
            break;
        }
    }
    if(k==-1){
        reverse(arr.begin(),arr.end());
    }
    for(int x=size-1;x>=k;x--){
        if(arr[x]>arr[k-1]){
            int temp=arr[k-1];
            arr[k-1]=arr[x];
            arr[x]=temp;
            break;
        }
    }
    reverse(arr.begin()+k,arr.end());
    // return ans;
};

int main(){
    vector<int> arr1 = {2,1,5,4,3,0,0};
    int n1=arr1.size();
    // vector<int> x = maxProfit(arr1,n1);
    maxProfit(arr1,n1);
    for(int i : arr1) cout << i<< " "; 
}