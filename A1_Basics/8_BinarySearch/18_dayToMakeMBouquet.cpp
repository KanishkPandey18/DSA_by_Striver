#include<bits/stdc++.h>
using namespace std ;

pair <int,int> miniMaxi(vector<int> arr){
    int n = arr.size();
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        mini = min(arr[i],mini); 
        maxi = max(arr[i],maxi); 
    }
    return {mini,maxi};
}

int check(vector<int> arr , int days , int bq , int flowers){
    int cnt=0;
    int ans = 0;
    for(int i=0 ; i<arr.size();i++){
        if(arr[i]<=days) cnt++;
        else{
            ans += cnt/flowers;
            cnt = 0;
        }
    }
    ans += cnt/flowers;
    return ans;
}

int blooming(vector<int> arr , int bq , int flowers){
    if((long long) bq*flowers > arr.size()) return -1;
    pair<int,int>miniMax = miniMaxi(arr);
    int low = miniMax.first;
    int high = miniMax.second;
    while(low<=high){
        int mid = (low+high)/2;
        int ans = check(arr,mid,bq,flowers);
        if(ans<bq)low=mid+1;
        else high = mid-1;
    }
    return low;
}

int main(){
    vector<int> arr = {7,7,7,7,13,11,12,7};
    int bq,flowers;
    cout << "Give number of bouquets and Flowers : ";
    cin >> bq >> flowers;
    int ans = blooming(arr,bq,flowers);
    cout << "Minimum Days will be : " << ans;
    return 0;
}