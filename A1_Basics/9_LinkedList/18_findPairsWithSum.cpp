#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* back;
    Node(int x, Node *n, Node* b)
    {
        data = x;
        next = n;
        back = b;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
        back = NULL;
    }
};

Node* arrayToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i],NULL,temp);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}


vector<pair<int,int>> pairsWithSum(Node* head,int key){
    Node* tail = head;
    Node* temp = head;
    vector<pair<int,int>> p;
    while(tail->next){
        tail = tail->next;
    }
    
    while(temp->data < tail->data){
        int sum = temp->data + tail->data;
        if(sum == key) {
            p.push_back({temp->data,tail->data});
            temp = temp->next;
            tail = tail->back;
        }
        else if(sum<key) temp = temp->next;
        else tail = tail->back;
    }
    return p;
}

int main(){
    int k;
    cout<< "Give Sum : ";
    cin >> k;
    vector<int> arr = {1,2,3,4,9};
    Node* head = arrayToDLL(arr);
    vector<pair<int,int>> ans = pairsWithSum(head,k);
    cout << "Pairs are : " ;
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i].first << "," << ans[i].second << "  ";
    }
}