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

Node* arrayToLL(vector<int> &arr)
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

Node* reverseLL(Node* head){
    if(head == NULL || head->next==NULL) return head;
    Node* prev = NULL;
    Node* temp = head;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp=front; 
    }
    return prev;
}

Node* inGroups(Node* head, int n){
    if (!head || n <= 1) return head;
    Node* temp = head;
    Node* front = head;
    Node* newHead = NULL;
    Node* lastHead = NULL;
    int cnt = 1;
    while(temp){
        Node* it = temp;
        while(it->next && cnt<n){
            it = it->next;
            cnt++;
        }
        if(cnt == n){
            front =  it->next;
            it->next = NULL;
            Node* nextHead = reverseLL(temp);
            if(newHead == NULL) newHead = nextHead;
            else lastHead->next = nextHead;
            lastHead = temp;
            temp = front;
            cnt = 1;
        }
        else{
            if(newHead == NULL) newHead = temp;
            if(lastHead) lastHead->next = temp;
            break;
        }
    }  
    return newHead;
}

int main(){
    vector<int> arr = {1,2};
    Node* head = arrayToLL(arr);
    head = inGroups(head,3);
    lengthAndDisplayLL(head);
}