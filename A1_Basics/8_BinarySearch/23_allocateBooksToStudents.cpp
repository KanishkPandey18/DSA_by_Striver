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

int check(vector<int> arr , int pages){
    int size =arr.size() ;
    int sumPages = 0;
    int student = 1;
    for(int i=0; i<size ; i++){
        if(sumPages+arr[i]<=pages){
            sumPages += arr[i];
        }
        else{
            sumPages = arr[i];
            student = student+1;
        }
    }
    return student;
}

int minimumPages(vector<int> arr,  int student){
    if(arr.size()< student) return -1;
    pair<int,int> maxiS = maxiSum(arr);
    int low = maxiS.first;
    int high = maxiS.second;
    int ans ;
    while(low<=high){
        int mid = (low+high)/2;
        int ansCheck = check(arr,mid);
        if(ansCheck <= student){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main(){
    vector<int> arr ={25,46,28,49,24};
    int n , ans;
    cout << "Give number of Students : ";
    cin >> n;
    ans = minimumPages(arr,n);
    cout << "Minimum Pages are : " << ans ;
}