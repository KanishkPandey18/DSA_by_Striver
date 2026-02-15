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

Node* deleteMidPoint(Node* head){
    if(head == NULL || head->next == NULL) return NULL; 
    Node* slow = head;
    Node* fast = head;
    Node* temp = NULL;
    while(fast && fast->next){
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    delete slow;
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrayToLL(arr);
    head = deleteMidPoint(head);
    lengthAndDisplayLL(head);
}