#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* back;
    Node(int x, Node *n, Node* b)
    {
        data = x;
        next = n;
        back = b;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
        back = NULL;
    }
};

Node* arrayToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i],NULL,temp);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

void lengthAndDisplayDLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt ++ ;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl <<"Length is : " << cnt;
}

Node* deleteHead(Node* head){
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* newHead = head->next;
    newHead->back = NULL;
    head->next = NULL;
    delete head;
    return newHead;
}

Node* deleteTail(Node* head){
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    temp->back = NULL;
    prev->next = NULL;
    delete temp;
    return head;
}

Node* deleteKElement(Node* head,int x){
    if(head==NULL)return NULL;
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt==x)break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == NULL && prev == NULL )return NULL;
    else if(prev == NULL) return deleteHead(head);
    else if(front == NULL) return deleteTail(head);
    temp->next = NULL;
    temp->back = NULL;
    delete temp;
    prev->next = front;
    front->back = prev;
    return head;
}

Node* deleteElement(Node* head, int el){
    if(head==NULL)return NULL;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == el)break;
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == NULL && prev == NULL )return NULL;
    else if(prev == NULL) return deleteHead(head);
    else if(front == NULL) return deleteTail(head);
    temp->next = NULL;
    temp->back = NULL;
    delete temp;
    prev->next = front;
    front->back = prev;
    return head;
}

Node* insertHead(Node* head,int el){
    if(head==NULL)return new Node(el,head,NULL);
    Node* newNode = new Node(el,head,NULL);
    head->back = newNode;
    return newNode;
}

Node* insertTail(Node* head,int el){
    if(head==NULL) return insertHead(head,el);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(el,NULL,temp);
    temp->next = newNode;
    return head;
}

Node* insertAtK(Node* head,int el,int k){
    if(head == NULL || k==1) return insertHead(head,el);
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k)break;
        temp = temp->next;
    }
    if (temp == NULL) return insertTail(head, el);
    Node* prev = temp->back;
    Node* front = temp;
    Node* newNode = new Node(el,front,prev);
    prev->next = newNode;
    front->back = newNode;
    return head;
}

int main()
{
    int k,el;
    vector<int> arr = {2, 5, 6, 7, 8, 10, 15, 18};
    Node* head = arrayToDLL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // cout<< "Give K : " ;
    // cin >> k;
    // if(k<=arr.size()) head = deleteKElement(head,k);
    // cout<< "Give el : " ;
    // cin >> el;
    // head = deleteElement(head,el);
    // head = insertHead(head,100);
    // head = insertTail(head,200);
    // head = insertAtK(head,150,k);
    lengthAndDisplayDLL(head);
    
}