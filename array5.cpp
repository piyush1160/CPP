#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key element" << endl;
    int key;
    cin >> key;

    int found = search(arr, size, key);

    if (found)
    {
        cout << "key element is succesfully found" << endl;
    }
    else
    {
        cout << "key element is not found" << endl;
    }

    return 0;
}