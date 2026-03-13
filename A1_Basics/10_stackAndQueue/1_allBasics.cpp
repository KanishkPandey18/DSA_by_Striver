#include<bits/stdc++.h>
using namespace std;
//Stack - LIFO
//Queue - FIFO
// -------------------------------------------------
//creating stack using array
class stack{
private:
    int top = -1;
    int st[10];

public:
    void push(int x){
        if(top == 9){
            cout << "Stack Overflow";
            return;
        }
        top++;
        st[top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow";
            return;
        }
        top--;
    }

    int peek(){
        if(top == -1){
            cout << "Stack is empty";
            return -1;
        }
        return st[top];
    }

    int size(){
        return top + 1;
    }
};

//creating queue using array
class queue{
    private:
        int size = 10;
        int start = -1;
        int end = -1;
        int q[10];
        int currsize = 0;
    public:
        void enqueue(int x){
            if(currsize == size){cout << "OverFlow"; return;}
            if(currsize == 0){
                start = 0;
                end = 0;
            }
            else{
                end = (end+1)%size;
            }
            q[end] = x;
            currsize++;
        }
        void dequeue(){
            if(currsize == 0){
                cout << "UnderFlow";
                return;
            }
            else if(currsize == 1){
                start = -1;
                end = -1;
            }
            else{
                start = (start+1)%size;
            }
            currsize--;
        }
        int front(){
            if(currsize == 0){
                cout << "empty queue";
                return -1;
            }
            return q[start];
        }
        int size(){
            return currsize;
        }

};

//Stack using LL
class Node{
public :
    int data;
    Node *next;

    Node(){
        next = NULL;
    }
    Node(int x){
        data = x;
        next = NULL;
    }
    Node(int x,Node* n){
        data = x;
        next = n;
    }
};

class stLL{
private:
    Node *top = NULL;
    int cnt = 0;
public:
    void push(int x){
        Node* newNode = new Node(x,top);
        top = newNode;
        cnt++;
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow";
            return;
        }
        else{
            Node* temp = top;
            top = top->next;
            delete temp;
            cnt--;
        }
    }
    int size(){
        return cnt;
    }
    int peek(){
        return top->data;
    }
};

class qLL{
private:
    Node* start = NULL;
    Node* end = NULL;
    int cnt=0;
public:
    void enque(int x){
        Node* newNode = new Node(x);
        if(start == NULL && end ==NULL){
            start = newNode;
            end = newNode;
        }
        else{
            end->next = newNode;
            end = newNode;
        }
        cnt++;
    }
    void deque(){
        if(start == end){ 
            start = NULL;
            end = NULL;
        }
        else{
        Node* temp = start;
        start = start->next;
        delete temp;
        cnt--;
        }
    }
    int peek(){
        if(start)return start->data;
        else return -1;
    }
    int size(){
        return cnt;
    }
};