#include<bits/stdc++.h>
using namespace std;

int longestSequence(vector<int> &arr,int size){
    if(size==0)return 0;
    unordered_set<int> st;
    for(int i=0;i<size;i++){
        st.insert(arr[i]);
    }
    int longest = 1;
    for(auto it : st){
        if(st.find(it - 1)==st.end()){
            int x=it;
            int cnt = 1;
            while(st.find(x+1)!=st.end()){
                cnt = cnt+1;
                x=x+1;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
};

int main(){
    vector<int> arr1 = {3,4, 5, 7, 6};
    int n1=arr1.size();
    int x = longestSequence(arr1,n1);
    // for(int i : x) cout << i<< " ";
    cout << x ; 
}