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

Node* sortLL(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);
    Node* zero = zerohead;
    Node* one = onehead;
    Node* two = twohead;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            one->next =temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (onehead->next)?onehead->next:twohead->next;
    one->next = twohead->next;
    two->next = NULL;
    Node* ans = zerohead->next;
    delete zerohead,onehead,twohead;
    return ans ; 
}

int main(){
    vector<int> arr = {1,0,1,2,0,2,1};
    Node* head = arrayToLL(arr);
    head = sortLL(head);
    lengthAndDisplayLL(head);
}