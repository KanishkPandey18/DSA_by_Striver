#include<bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>> &matrix){
    int col_0=1;
    for(int i = 0;i<4-1;i++){
        for(int j=i+1 ; j<4 ;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<4;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }   
}

int main(){
    vector<vector<int>> matrix;
    matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate90(matrix);
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
    cout << endl;
    }
    // for (const auto &row : matrix) {
    //     for (const auto &val : row) {
    //         cout << val << " ";
    //         }
    //     cout << endl;
    // }
}