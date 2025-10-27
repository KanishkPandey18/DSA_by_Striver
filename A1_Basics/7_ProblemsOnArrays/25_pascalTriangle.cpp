#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for(int r = 1;r<=n;r++){
        vector<int> row;
        int el = 1 ;
        row.push_back(el);
        for(int c=1;c<r;c++){
            el=el*(r-c);
            el=el/c;
            row.push_back(el);
        }
        ans.push_back(row);
    }
    return ans;
}

int main(){
    vector<vector<int>> ans =pascalTriangle(6);
    for(auto x:ans){
        for(auto y:x){
            cout << y << " ";
        }
        cout << endl;
    }
}