#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int> arr){
    int ans = INT_MIN;
    for(int i=0 ; i<arr.size() ; i++){
        ans = max(ans,arr[i]);
    }
    return ans ;
}

int check(vector<int> arr,int hourly ,int n){
    int size = arr.size();
    int totalHours = 0;
    for(int i=0; i<size ;i++){
        totalHours += ceil((double)arr[i]/(double)hourly);
    }
    if(totalHours<=n) return 1;
    else return -1;
}

int perHourBanana(vector<int> arr,int n){
    int low = 1;
    int high = maxi(arr);
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        int status = check(arr,mid,n);
        if(status == 1){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1; 
    }
    return ans ;
}

int main(){
    vector<int> arr = {3,6,7,11};
    int n ;
    cout << "Total time should be (hours) : ";
    cin >> n;
    int ans = perHourBanana(arr,n);
    cout << "Per hour Banana to eat :  " << ans ;
}