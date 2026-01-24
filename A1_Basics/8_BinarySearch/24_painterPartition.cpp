#include<bits/stdc++.h>
using namespace std;

pair<int , int> maxiSum(vector <int> arr){
    int maxi = INT_MIN ;
    int sum = 0;
    int size =arr.size(); 
    for(int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
        sum += arr[i];
    }
    return {maxi,sum};
}

int check(vector<int> arr, int p){
    int size = arr.size();
    int painters = 1;
    int cnt=0;
    for(int i=0;i<size;i++){
        if(cnt+arr[i]<=p){
            cnt = cnt+arr[i];
        }
        else{
            cnt = arr[i];
            painters+=1;
        }
    }
    return painters;
}

int paintersPartition(vector<int> arr, int painters){
    pair<int,int> maxiS = maxiSum(arr);
    int low = maxiS.first;
    int high = maxiS.second;
    while(low<=high){
        int mid = (low+high)/2;
        int temp = check(arr,mid);
        if(temp <= painters){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> arr ={10,20,30,40};
    int n , ans;
    cout << "Give number of Painters : ";
    cin >> n;
    ans = paintersPartition(arr,n);
    cout << "Minimum time will be : " << ans ;
}