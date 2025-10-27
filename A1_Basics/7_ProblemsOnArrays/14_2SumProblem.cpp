#include<bits/stdc++.h>
using namespace std;

pair<int,int> twoSum(vector <int> arr , int size , int target){
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = size-1;
    while(left<right){
        if(arr[left]+arr[right]>target){
            right--;
        }
        else if(arr[left]+arr[right]<target){
            left++; 
        }
        else{
            return {arr[left],arr[right]};
        }
    }
    return {-1,-1};
}

int main(){
    int target;
    cout << "What sum do you want : ";
    cin >> target;
    vector<int> arr1 = {2,6,5,8,11};
    int n1=arr1.size();
    pair<int, int>x = twoSum(arr1,n1,target);
    if(x.first==-1&& x.second==-1){
        cout << "No pair Found.";
    }
    else{
        cout << "Sum of " << x.first << " and " << x.second ;
    }
    return 0 ;
}