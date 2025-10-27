#include<bits/stdc++.h>
using namespace std;

int maxConseOnce(vector<int> arr,int size){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            cnt+=1;
            maxi = max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }   
    return maxi;
}

int main(){
    vector<int> arr1 = {1,1,1,1,1,1,2,1,1,1,5,5,1,1,1,1};
    int n1=arr1.size();
    int num = maxConseOnce(arr1,n1);
    cout <<"Max Consecutive ones are : " << num ;
    return 0;
}