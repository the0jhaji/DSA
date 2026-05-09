#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{

    print(arr, s, e);

    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{

    int arr[4] = {2, 3, 4, 5};

    bool ans = binarySearch(arr, 0, 3, 4);

    cout << "Present or not: " << ans << endl;
}