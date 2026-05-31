#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.size() << endl;
    if (d.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else
    {
        cout << "Deque is not empty" << endl;
    }
    d.pop_back();
    cout << d.front() << endl;
    cout << d.back() << endl; 
    deque<int> :: iterator it=d.begin();
    while(it!=d.end()){
        cout<<*it<<" ";
        it++;
    } 
}