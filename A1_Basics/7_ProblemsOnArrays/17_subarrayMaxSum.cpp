#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr,int size){
    int maxi=INT_MIN;
    int sum=0;
    int start=-1,end=-1;
    for(int i=0;i<size;i++){
        if(sum==0)start=i;
        sum+=arr[i];
        if(sum<0){
            sum=0;   
        }
        if(sum>maxi){
            maxi=sum;
            start=start;
            end=i;
        }
    }
    if(maxi<0)maxi=0;
    else return maxi;           //to return the subarray we can return array from index start to end.
};

int main(){
    vector<int> arr1 = {-1,-3,-5};
    int n1=arr1.size();
    int x = maxSum(arr1,n1);
    cout<<"Sum is : " << x; 
}