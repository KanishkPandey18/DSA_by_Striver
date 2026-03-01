#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x, Node *n)
    {
        data = x;
        next = n;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *arrayToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        mover->next = new Node(arr[i]);
        mover = mover->next;
    }
    return head;
}

void lengthAndDisplayLL(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl <<  "Lenght is : " << cnt;
}

Node* merge2Sorted(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummyHead = new Node(-1,NULL);
    Node* curr = dummyHead;
    while(temp1 && temp2){
        if(temp1->data<temp2->data){
            curr->next = temp1;
            temp1 = temp1->next;
        }
        else{
            curr->next = temp2;
            temp2 = temp2->next;
        }
        curr = curr->next;
    }
    if(temp1){
        curr->next = temp1;
    }
    else if(temp2){
        curr->next = temp2;
    }
    return dummyHead->next;
}

Node* sortLL(Node* head){
    if(head==NULL || head->next==NULL)return head;
    Node* mid = head;
    Node* fast = mid->next;
    while(fast && fast->next){
        mid = mid->next;
        fast = fast->next->next;
    }
    Node* leftHead = head;
    Node* rightHead = mid->next;
    mid->next = NULL;
    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);
    head = merge2Sorted(leftHead,rightHead);
    return head;
}

int main(){
    vector<int> arr = {3,4,2,1,5,8,9,7};
    Node* head = arrayToLL(arr);
    head = sortLL(head);
    lengthAndDisplayLL(head);
}