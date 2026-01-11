#include<bits/stdtr1c++.h>
using namespace std;

pair<int,int> maxAndSum(vector <int> arr){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0 ; i<arr.size() ; i++){
        sum+=arr[i];
        maxi = max(maxi,arr[i]);
    }
    return {sum,maxi};
}
int check(vector<int> arr, int cap){
    int days = 1;
    int load = 0;
    for(int i=0;i<arr.size();i++){
        if(load+arr[i] > cap){
            days = days+1;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return days;
}

int loading(vector<int> arr , int D){
    pair<int, int> stats = maxAndSum(arr);
    int low = stats.second; // Max element (minimum possible capacity)
    int high = stats.first; // Total sum (maximum possible capacity)
    int ans = high;
    while(low<=high){
        int mid = (low+high)/2;
        int days = check(arr,mid);
        if(days<=D){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
    int n , ans;
    cout << "Give Min days : ";
    cin >> n;
    ans = loading(arr,n);
    cout << "Least capacity : " << ans ;
}