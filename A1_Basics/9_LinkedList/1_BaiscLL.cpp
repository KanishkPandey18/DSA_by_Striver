// All the basic of the Linked list
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

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
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
    if(k==1) return deleteHead(head);
    Node* temp = head;
    int cnt = 0;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteElement(Node* head, int el){
    if(head==NULL) return NULL;
    if(head->data == el) return deleteHead(head);
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        int check = temp->data;
        if(check == el){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    int k,el;
    vector<int> arr = {2, 5, 6, 7, 8, 10, 15, 18};
    Node* head = arrayToLL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // cout<< "Give K : " ;
    // cin >> k;
    // if(k<=arr.size()) head = deleteKElement(head,4);
    cout<< "Give el : " ;
    cin >> el;
    head = deleteElement(head,el);
    lengthAndDisplayLL(head);
    
}