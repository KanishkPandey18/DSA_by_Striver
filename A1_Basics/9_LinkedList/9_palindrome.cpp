#include<bits/stdc++.h>
using namespace std;

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
    cout << endl <<  "Lenght is : " << cnt << endl;
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

bool palindrome(Node* head){
    Node* temp = head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseLL(slow->next);
    Node* temp2 = newHead; 
    while(temp2!=NULL){
        if(temp->data!=temp2->data){
            reverseLL(newHead);
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    reverseLL(newHead);
    return true;
}

int main(){
    vector<int> arr = {1,1,2,3,3,2,1,1};
    Node* head = arrayToLL(arr);
    bool ans = palindrome(head);
    lengthAndDisplayLL(head);
    ans? cout << "true" : cout<< "false" ;
}