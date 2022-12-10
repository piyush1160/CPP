#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;
    // update the array ...
    arr[0] = 45;
    // print the array..
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "going back to main" << endl;
}

int main()
{
    int arr[3]{10, 20, 30};

    update(arr, 3);

    cout << "\n Printing the main function array " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}