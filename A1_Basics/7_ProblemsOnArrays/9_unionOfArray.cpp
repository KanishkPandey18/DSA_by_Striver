#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfArrays(vector<int> &arr1,int n1 ,vector<int> &arr2 , int n2){
    vector<int> Union;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(Union.empty() || Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr2[j]<arr1[i]){
            if(Union.empty() || Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(Union.empty()||Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
                i++;
                j++;
        }
    }
    while(i<n1){
        if(Union.size()==0 || Union.back()!=arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    
    }
    while(j<n2){
        if(Union.size()==0 || Union.back()!=arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }
    return Union;
}

vector <int> intersection(vector <int>arr1,int n1,vector <int>arr2,int n2){
    vector<int> temp;
    int i= 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return temp;
}


int main(){
    
    vector<int> arr1 = {1,2,2,4,5,5};
    vector<int> arr2 = {2,3,4,5,6};
    int n1=arr1.size(),n2=arr2.size();
    vector<int> Union = unionOfArrays(arr1,n1,arr2,n2);
    vector<int> intersect = intersection(arr1,n1,arr2,n2);
    cout << "Union : ";
    for(int x : Union) cout << x << " ";
    cout << "Intersection : ";
    for(int x : intersect) cout << x << " ";
    cout << endl;
    return 0;
}