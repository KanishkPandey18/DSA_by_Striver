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

Node* groupOddAndEvenIndexes(Node* head){
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;
    while(even && even->next){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = arrayToLL(arr);
    head = groupOddAndEvenIndexes(head);
    lengthAndDisplayLL(head);
}