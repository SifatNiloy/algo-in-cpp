#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int searchValue, int lb, int ub)
{ 
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (array[mid] == searchValue)
        {
            return mid;
        }
        else if (searchValue > array[mid])
        {
            lb = mid + 1;
        }
        else
        { // searchValue < array[mid]
            ub = mid - 1;
        }
    }
}

void printArray(int array[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    printArray(array, n);

    int searchValue;
    cin >> searchValue;

    cout << "Position: " << binarySearch(array, searchValue, 0, n-1) + 1;

    cout << endl
         << endl;

    return 0;
}