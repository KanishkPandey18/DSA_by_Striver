#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node* next;
    Node* back;
    Node(string x, Node *n, Node* b)
    {
        data = x;
        next = n;
        back = b;
    }
    Node(string x)
    {
        data = x;
        next = NULL;
        back = NULL;
    }
};

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

class browser{
public:
    Node* current;
    browser(string homePage){
        current = new Node(homePage);
    }
    Node* visit(string url){
    Node* newNode = new Node(url);
    current->next = newNode;
    newNode->back = current;
    current = newNode;
    return current;
    }

    Node* back(int steps){
        while(steps && current->back){
            current = current->back;
            steps--;
        }
        return current;
    }

    Node* forward(int steps){
        while(steps && current->next){
            current = current->next;
            steps--;
        }
        return current;
    }
};




int main(){
    browser b("homePage");
    Node* current = b.current;
    // Visit pages
    current = b.visit("facebook.com");
    current = b.visit("youtube.com");
    current = b.visit("leetcode.com");
    current = b.back(4);

    cout << "Current Page: " << current->data << endl;
}