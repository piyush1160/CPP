#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]); // by default bana hua hai..
        /*
        if (arr[i] < min)
        {
            min = arr[i];
        }
        */
    }
    // return the max value;
    return mini;
}

int getMax(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); // by default bana hua hai..
        /* if (arr[i] > max)
         {
             max = arr[i];
         }*/
    }
    // return the max value;
    return maxi;
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

    cout << "maximum value in array " << getMax(arr, size) << endl;
    cout << "minimum value in array " << getMin(arr, size) << endl;
    return 0;
}
