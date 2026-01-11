#include<bits/stdc++.h>
using namespace std ;



bool canWePlace(vector<int> &arr, int mid , int c){
    int cntC = 1 , last = 0;
    for(int i = 1 ; i<arr.size() ; i++){
        if(arr[i]-arr[last] >= mid){
            cntC +=1;
            last = i;
        }
    }
    if(cntC >= c) return true;
    else return false;
}

int minimumDistance(vector<int> &arr, int c){
    sort(arr.begin(),arr.end());
    int low = 1;
    int high = arr[arr.size()-1] - arr[0];
    while(low<=high){
        int mid = (low+high)/2;
        bool canWe = canWePlace(arr,mid,c);
        if(canWe == true) low=mid+1;
        else high = mid-1;
    }
    return high;
}

int main(){
    vector<int> arr ={0,3,4,7,9,10};
    int n , ans;
    cout << "Give number of cows : ";
    cin >> n;
    ans = minimumDistance(arr,n);
    cout << "Minimum Distance is : " << ans ;
}