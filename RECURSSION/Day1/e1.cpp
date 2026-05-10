//generate n to 1 ussing recursion
#include <iostream>
using namespace std;

void count(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    count(n - 1);
}

int main()
{
    count(4);
}