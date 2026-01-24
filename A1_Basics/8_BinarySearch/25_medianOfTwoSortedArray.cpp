#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int> arr1,vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1+n2;
    int ind1 = (n/2)-1;
    int ind2 = (n/2);
    int cnt = 0;
    int el1 = -1;
    int el2 = -1;
    int i = 0 , j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(cnt == ind1) el1=arr1[i];
            if(cnt == ind2) el2=arr1[i];
            cnt++;
            i++;
        }
        else{
            if(cnt == ind1) el1=arr2[j];
            if(cnt == ind2) el2=arr2[j];
            cnt++;
            j++;
        }
    }
    while(i<n1){
        if(cnt == ind1) el1=arr1[i];
        if(cnt == ind2) el2=arr1[i];
        cnt++;
        i++;
    }
    while(j<n2){
        if(cnt == ind1) el1=arr2[j];
        if(cnt == ind2) el2=arr2[j];
        cnt++;
        j++;
    }
    if(n%2==1) return el2;
    else return (double)(double(el1+el2))/2;
}

int main(){
    vector<int> arr1 = {1,3,4,7,10,12};
    vector<int> arr2 = {2,3,6,15};
    double ans = findMedian(arr1,arr2);
    cout << "Median is : " << ans ;
}