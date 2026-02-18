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

Node* removeDuplicates(Node* head){
    if(head==NULL || head->next == NULL) return head;
    Node* temp = head;
    while(temp != NULL && temp->next!=NULL){
        Node* front = temp->next;
        if(front->data == temp->data){
            Node* front1 = front->next; 
            temp->next = front1;
            if(front1 != NULL)front1->back = temp;
            delete front;
        }
        else temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {1,1,1,2,3,3,4,4};
    Node* head = arrayToDLL(arr);
    head = removeDuplicates(head);
    lengthAndDisplayDLL(head);
}