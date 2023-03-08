#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter length of the array : ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "the array is : ";
    for (int i = 0; i < n; i++)
    
    {
        cout << array[i] << " ";
    }
    cout << endl
         << endl;

    int searchValue;
    cout<<"enter number for searching in the array: ";
    cin >> searchValue;

    int status = 0;
    int foundArray[n], k = 0;
    // Unique Valued Array
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] == searchValue)
    //     {
    //         status = 1;
    //         printf("Position: %d", i + 1);
    //         break;
    //     }
    // }

    // Duplicate valued Array
    for (int i = 0; i < n; i++)
    {
        if (array[i] == searchValue)
        {
            status = 1;
            foundArray[k] = i;
            k++;
        }
    }
    cout << "Position: ";
    for (int i = 0; i < k; i++)
    {
        cout << foundArray[i] + 1;
        if (i != k - 1)
            cout << ", ";
    }

    if (status == 0)
    {
        cout << "Not found in the Array";
    }

    cout << endl
         << endl;
    return 0;
}