#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector <int> arr , int size , int target){
    vector<vector<int>> ans ;
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++){
        if( i>0 && arr[i]==arr[i-1])continue;
        for(int j=i+1;j<size;j++){
            if(j>i+1 && arr[j]==arr[j-1])continue;
            int k=j+1;
            int l=size-1;
            while(k<l){
                long long sum = arr[i]+arr[j]+arr[k]+arr[l];
                if(sum==target){
                    vector<int>temp ={arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l &&arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--;
                }
                else if(sum<target)k++;
                if(sum>target)l--;
            }
        }
    }
    return ans;
}

int main(){
    int target;
    cout << "What sum do you want : ";
    cin >> target;
    vector<int> arr1 = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    int n1=arr1.size();
    vector<vector<int>>x = fourSum(arr1,n1,target);
    for(int i=0;i<x.size();i++){
        for(int j=0;j<4;j++){
            cout << x[i][j] << " ";
        } 
        cout<<endl;
    }
    return 0 ;
}