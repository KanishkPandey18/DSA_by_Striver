#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> arr,int size){
    int el;
    int count=0;
    for(int i=0;i<size;i++){
        if(count==0){
            el=arr[i];
            count=1;
        }
        else if(arr[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==el)cnt++;
    }
    if(cnt>size/2){
        return el;
    }
    return -1;
};

int main(){
    vector<int> arr1 = {1,1,1,1,2,2,2,2,3,3,3,3,3,3,3};
    int n1=arr1.size();
    int x = maxElement(arr1,n1);
    cout<<"Majority Element is : " << x; 
}