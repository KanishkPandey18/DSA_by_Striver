//majority element > n/3
#include<bits/stdc++.h>
using namespace std;

//BETTER SOLUTION
vector<int> majElement(vector<int>arr,int size){
    map<int,int>mpp;
    vector<int>ans;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]>size/3){
            ans.push_back(arr[i]);
        }
        if(ans.size()==2){
            break;
        }
    }
    return ans;
}

//------------------------------------------------------------------------------------
//Best Optimal Solution

// vector<int> majElement(vector<int>arr,int size){
//     vector<int>ans;
//     int el1,el2;
//     int count1=0,count2=0;
//     for(int i=0;i<size;i++){
//         if(count1==0 && arr[i]!=el2){
//             el1=arr[i];
//             count1=1;
//         }
//         else if(count2==0 && arr[i]!=el1){
//             el2=arr[i];
//             count2=1;
//         }
//         else if(arr[i]==el1){
//             count1++;
//         }
//         else if(arr[i]==el2){
//             count2++;
//         }
//         else{
//             count1--;
//             count2--;
//         }
//     }
//     int cnt1=0,cnt2=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==el1){
//             cnt1+=1;
//         }
//         if(arr[i]==el2){
//             cnt2+=1;
//         }
//     }
//     if(cnt1>size/3){
//         ans.push_back(el1);
//     }
//     if(cnt2>size/3){
//         ans.push_back(el2);
//     }
//     return ans;
// }

int main(){
    vector<int> arr1 = {1, 2, 1, 1, 3, 2, 2};
    int n1=arr1.size();
    vector<int> x = majElement(arr1,n1);
    cout<<"Majority Element is/are : " ;
    for(auto it : x){
        cout << it << " ";
    } 
}




