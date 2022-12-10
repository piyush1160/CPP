#include <iostream>
using namespace std;

int findPeakelement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
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

    cout << "Peak element in the array is " << findPeakelement(arr, size) << endl;

    return 0;
}