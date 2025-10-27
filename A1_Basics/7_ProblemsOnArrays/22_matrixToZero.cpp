#include<bits/stdc++.h>
using namespace std;

void valuesToZero(vector<vector<int>> &matrix){
    int col_0=1;
    for(int i = 0;i<4;i++){
        for(int j=0 ; j<4 ;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j==0)col_0=0;
                else{
                matrix[0][j]=0;
                }
            }
        }
    }
    for(int i = 1;i<4;i++){
        for(int j=1 ; j<4 ;j++){
            if(matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0) for(int j=0;j<4;j++) matrix[0][j]=0;
    if(col_0==0) for(int i=0;i<4;i++) matrix[i][0]=0;    
}

int main(){
    vector<vector<int>> matrix;
    matrix = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}};
    valuesToZero(matrix);
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