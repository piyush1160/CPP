#include <iostream>
using namespace std;

int firstoccurance(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastoccurance(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int even[100] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    int key = 3;

    cout << "key " << key << " is present at index " << firstoccurance(even, 100, 3) << endl;
    cout << "key " << key << " is present at index " << lastoccurance(even, 100, 3) << endl;
} 