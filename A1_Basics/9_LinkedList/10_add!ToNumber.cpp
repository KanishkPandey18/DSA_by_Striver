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

Node* insertHead(Node* head,int data){
    return new Node(data,head);
}

int addition(Node* head){
    if(head == NULL) return 1;
    int carry = addition(head->next);
    if(carry){
        int sum = head->data + carry;
        head->data = sum%10;
        carry = sum/10;
        return carry;
    }
    else return carry;
}

Node* add1(Node* head){
    int carry = addition(head);
    if(carry) head = insertHead(head,1);
    return head;
}

int main(){
    vector<int> arr = {8,9,9}; 
    Node* head = arrayToLL(arr);
    head = add1(head);
    lengthAndDisplayLL(head);
}