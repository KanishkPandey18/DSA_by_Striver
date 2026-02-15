#include<bits/stdc++.h>
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

Node* createCircularLL(vector<int> &arr) {
    if(arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    temp->next = head;  //  Make it circular
    return head;
}

void length(Node *head)
{
    Node *temp = head;
    int cnt = 1;
    temp = temp->next;
    while (temp != head)
    {
        cnt++;
        temp = temp->next;
    }
    cout << endl <<  "Length is : " << cnt;
}

void ifACycle(Node* head){
    if(head == NULL){
        cout << "No Cycle";
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return length(slow);
    }
    cout << "No Cycle";
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = createCircularLL(arr);
    ifACycle(head);
}