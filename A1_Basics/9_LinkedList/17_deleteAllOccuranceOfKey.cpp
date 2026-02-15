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

Node* deleteAllOccurances(Node* head,int key){
    while(head && head->data == key){
            Node* lostHead = head;                      //10,4,10,10,6,10
            head = head->next;
            if(head)head->back = NULL;
            delete lostHead;
    }
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            Node* front = temp->next;
            Node* prev = temp->back;
            if(prev!=NULL)prev->next = front;
            if(front!=NULL)front->back = prev;
            delete temp;
            temp = front;
        }
        else temp = temp->next;
    }
    return head;
}

int main(){
    int k;
    cout<< "Give element : ";
    cin >> k;
    vector<int> arr = {10,4,10,10,6,10};
    Node* head = arrayToDLL(arr);
    head = deleteAllOccurances(head,k);
    lengthAndDisplayDLL(head);
}