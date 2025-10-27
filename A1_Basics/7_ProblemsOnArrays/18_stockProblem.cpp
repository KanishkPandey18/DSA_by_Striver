#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> arr,int size){
    int mini = arr[0];
    int profit=0;
    for(int i=1;i<size;i++){
        int cost=arr[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,arr[i]);
    }
    return profit;
};

int main(){
    vector<int> arr1 = {7,6,4,3,1};
    int n1=arr1.size();
    int x = maxProfit(arr1,n1);
    cout<<"Max profit is : " << x; 
}