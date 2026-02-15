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

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node* deleteKElement(Node* head, int k){
    if(head==NULL) return NULL;
    if(k==1) return deleteTail(head);
    Node* fast = head;
    Node* slow = head;
    for(int i=0;i<k;i++){
        fast = fast->next;
    }
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* temp = slow->next;
    slow->next = temp->next;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {1,0,1,2,0,2,1};
    int k;
    Node* head = arrayToLL(arr);
    cout << "Give K : ";
    cin >> k;
    if(k<=arr.size()){
        head = deleteKElement(head,k);
        lengthAndDisplayLL(head);
    }
    else cout << "Give a valid K.";
}