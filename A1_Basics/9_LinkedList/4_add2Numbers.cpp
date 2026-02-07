#include<bits/stdc++.h>
using namespace std;

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

Node* sumOf2(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummyHead = new Node(-1,NULL,NULL);
    Node* curr = dummyHead;
    int carry = 0;
    while(temp1!=NULL || temp2!=NULL){
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;
        Node* newNode = new Node(sum%10,NULL,curr) ;
        carry = sum/10;
        curr->next = newNode;
        curr = curr->next;
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    Node* result = dummyHead->next;
    if (result) result->back = NULL; 
    delete dummyHead;
    return result;
}

int main(){
    vector<int> arr1 = {3,8,7};
    Node* head1 = arrayToDLL(arr1);
    vector<int> arr2 = {5,2,4,1};
    Node* head2 = arrayToDLL(arr2);
    Node* head = sumOf2(head1,head2);
    lengthAndDisplayDLL(head);
}