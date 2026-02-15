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

void lengthAndDisplayDLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt ++ ;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl <<"Length is : " << cnt;
}

Node* check(Node* head1,Node* head2){
    if(head1 == NULL || head2 == NULL) return NULL;
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != temp2) {
        temp1 = (temp1 == NULL) ? head2 : temp1->next;
        temp2 = (temp2 == NULL) ? head1 : temp2->next;
    }
    return temp1;;
}

int main(){
    vector<int> arr1 = {3,1,4,6,2};
    Node* head1 = arrayToDLL(arr1);
    vector<int> arr2 = {1,2,4,5,4,6,2};
    Node* head2 = arrayToDLL(arr2); 
    Node* ans = check(head1,head2);
    cout << ans->data;
}