#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(4);
    myList.push_front(5);
    myList.push_front(10);
    // myList.pop_back();
    // myList.pop_front();
    cout << myList.front() << endl;
    cout << myList.back() << endl;
    cout << myList.size() << endl;
    // myList.clear();
    cout << myList.size() << endl;
    if (myList.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }
    list<int>::iterator it = myList.begin();
    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    myList.remove(10);

    it = myList.begin();
    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(60);
    // swap
    myList.swap(lst);

    it = myList.begin();
    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    it = lst.begin();
    while (it != lst.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}
