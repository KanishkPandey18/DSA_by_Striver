#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> arr){
    int ans = INT_MIN;
    for(int i=0 ; i<arr.size() ; i++){
        ans = max(ans,arr[i]);
    }
    return ans ;
}

int check(vector<int> arr ,int mid,int n){
    int temp = 0;
    for(int i=0;i<arr.size();i++){
        temp+= ceil((double)arr[i]/(double)mid);
    }
    return temp;
}

int smallestDivisor(vector<int> arr,int n){
    if(n<arr.size()) return -1;
    int low = 1;
    int high = maxi(arr);
    int temp;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        temp = check(arr,mid,n);
        if(temp<=n){
            ans = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={1,2,5,9};
    int n , ans;
    cout << "Give Threshold Value : ";
    cin >> n;
    ans = smallestDivisor(arr,n);
    cout << "Smallest Divisor for threshold will be : " << ans ;
}