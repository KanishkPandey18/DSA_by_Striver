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

Node* ifACycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return slow;
    }
    return NULL;
}

Node* findStart(Node* head){
    Node* slow = ifACycle(head);
    if(slow){
        Node* fast = slow;
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return NULL;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = createCircularLL(arr);
    Node* ans =  findStart(head);
    ans?cout << ans->data : cout << "No cycle"; 
}