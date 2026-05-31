#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"Priority Queue is empty"<<endl;
    }
    else{
        cout<<"Priority Queue is not empty"<<endl;
    } 
}