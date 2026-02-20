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

Node* rotateByK(Node* head,int k){
    if(head==NULL || head->next == NULL) return head;
    Node* temp = head;
    Node* fast = head;
    Node* slow = head;
    int len = 1;
    while(temp->next){
        len++;
        temp = temp->next;
    }
    k = k%len;
    if(k==0)return head;
    for(int i=1;i<len-k;i++){
        slow = slow->next;
    }
    temp->next = head;
    head = slow->next;
    slow->next = NULL;
    return head;
}

int main(){
    vector<int> arr = {1,1,1,2,3,3,4,4};
    Node* head = arrayToLL(arr);
    head = rotateByK(head,8);
    lengthAndDisplayLL(head);
}