#include <bits/stdc++.h>

using namespace std;

void printArray(int myArray[], int n)
{
    cout << "My Array: ";
    for (int i = 0; i < n; i++)
    {
        // cout<< myArray[i] << " ";
        cout << &myArray[i] << endl;
        // scanf("%d", &myArray[i]);
    }
}

int linearSearch(int array[], int size, int searchValue)
{

    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchValue)
        {
            index = i;
        }
    }

    return index;
}

int binarySearch(int array[], int searchValue, int lb, int ub)
{

    int index = -1;

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (searchValue == array[mid])
        {
            index = mid;
            break;
        }
        else if(searchValue < array[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }

    return index;
}

int main()
{

    int n;
    cin >> n;
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
        // scanf("%d", &myArray[i]);
    }

    int searchValue;
    cin >> searchValue;

    // if (linearSearch(myArray, n, searchValue) == -1)
    // {
    //     cout << "Not Found in the Array";
    // }
    // else
    // {
    //     cout << searchValue << " has been found in index " << linearSearch(myArray, n, searchValue);
    // }

    if (binarySearch(myArray, searchValue, 0, n-1) == -1)
    {
        cout << "Not Found in the Array";
    }
    else
    {
        cout << searchValue << " has been found in index " << 
                binarySearch(myArray, searchValue, 0, n-1);
    }

    // printArray(myArray, n);

    return 0;
}