#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector <int> arr , int size , int target){
    vector<vector<int>> ans ;
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++){
        vector<int> temp;
        if( i>0 && arr[i]==arr[i-1])continue;
        int j = i+1,k=size-1;
        while(j<k){
            int third = arr[i]+arr[j]+arr[k];
            if(third<0){
                j++;
            }
            else if(third>0){
                k--;
            }
            else{
                vector<int> temp = {arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (arr[j]==arr[j-1])j++;
                while (arr[k]==arr[k+1])k--;
                
            }
        }
    }
    return ans;
}

int main(){
    int target;
    cout << "What sum do you want : ";
    cin >> target;
    vector<int> arr1 = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int n1=arr1.size();
    vector<vector<int>>x = threeSum(arr1,n1,target);
    for(int i=0;i<x.size();i++){
        for(int j=0;j<3;j++){
            cout << x[i][j] << " ";
        } 
        cout<<endl;
    }
    return 0 ;
}