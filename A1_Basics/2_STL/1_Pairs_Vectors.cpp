//Understanding Basics of STLs : PAIRS ,
#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p = {1,3};
    cout <<"First Element 1 : " << p.first << endl << "Second Element 1 : " << p.second <<endl;

    pair<int,pair<int,int>> x = {1,{2,3}} ;
    cout <<"First Element 2 : " << x.first << endl << "Second Element 2 : " << x.second.first << "," << x.second.second << endl ;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}} ;
    cout << "Second Element 3 : " << arr[1].second ;

}

void explainVector(){                       //Vector is a container which has dynamic size and can inc or dec with value
    vector<int> v;                          //Initialization of Vectors
    v.push_back(1);                         //Inserting a value 
    v.emplace_back(2);                      //emplace is similar tu push but faster

    vector<pair<int,int>> v1;               //A vector or Pair datatype can alse be created
    
    vector<int> v2(3,100);//{100,100,100}   //A vector with 3 values '100's .  
    v2.insert(v2.begin()+1,10);             //{100,10,100,100} - Inserts the value at 2nd place    
    vector<int> v3(v2);                     //A new vector container having same values as V2          
    // vector<int> v({10,15,40,5,6,8});        
    vector<int>::iterator i = v.begin();    //i = address of first element of vector    
    i--;
    cout << *(i);                           // '*' is used to get the element at that address
    cout << v2[0] << v[0] ;                 //Same access like array using indexes
    
    //To delete elements we use erase function
    //v.erase(start address , end address+1)
    v.erase(v.begin()+1 , v.begin()+3);      //if end address is not given it deletes only 1 item   

    v.size();                                //Gives the size of vector   
    v.pop_back();                            //pops the last element
    v.swap(v3);                              //v1 values swaps with v2     
    v.clear();                               //clear the list 
    v.empty();                               //True if the vector is empty

}

void explainList(){
    list<int> l({1,2,3,4,5,6});
    l.emplace_front(7);
    l.push_front(0);
    l.back();
    //ALL the other functions are same as Vector (emplace,insert,begin,size,empty,swap,end,)

}
void explaindequeue(){                  // double ended queue from both sides
    deque<int> dq ;
    dq.push_back(20);
    dq.pop_back();
    dq.front();
    dq.back();
}

void explainStack(){                    //lifo - last in first out
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.top()<< endl;
    cout << st.size() << endl;
    cout << st.empty() << endl ; 
    st.pop();
    cout << st.top()<< endl;
    cout << st.size() << endl;
}

void explainQueue(){                    //fifo - first in first out
    queue <int> q ;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);
    q.back()+=2;
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    
}

void explainPriorityQueue(){                    //maximum element stays at the top 
    priority_queue <int> pq ; 
    pq.push(5);
    pq.push(20);
    pq.push(10);
    cout << pq.top() <<endl ;

// minimum pq 
    priority_queue< int , vector <int> , greater<int>> pq1 ;
    pq1.push(5);
    pq1.push(20);
    pq1.push(10);
    cout << pq1.top() ;
}

int main(){
    explainVector();
}