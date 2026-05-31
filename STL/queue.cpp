#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    queue<int> p;
    p.push(100);
    p.push(200);
    p.push(300);
    p.push(400);
    p.push(500);
    q.swap(p);
    cout << q.front() << endl;
    cout << q.back() << endl;
    // q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;  
    cout << q.size() << endl;
    q.
    // if (q.empty())
    // {
    //     cout << "Queue is empty" << endl;
    // }
    // else
    // {
    //     cout << "Queue is not empty" << endl;
    // }
    
}