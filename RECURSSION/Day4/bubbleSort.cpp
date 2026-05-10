#include <iostream>
using namespace std;

void sortAr(int arr[], int n)
{

    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // one round of bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive call
    sortAr(arr, n - 1);
}

int main()
{

    int arr[] = {2, 4, 1, 6, 0};
    int n = 5;

    sortAr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}