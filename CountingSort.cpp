#include <bits/stdc++.h>

using namespace std;

void PrintArray(int array[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int array[n];
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout<<"Before Sort: ";
    PrintArray(array, n);

    // Step 1: Find the maximum number
    int Max = -9999;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > Max)
            Max = array[i];
    }

    //Step 2: Generate a 'count' array with size Max+1 and fill with '0'
    int countsize = Max + 1;
    int count[countsize];

    for (int i = 0; i < countsize; i++)
    {
        count[i] = 0;
        
    }
    
    // Step 3: Frequency Calculation
    for (int i = 0; i < n; i++)
    {
        count[array[i]]++;
    }

    PrintArray(count, countsize); 


    // Step 4: Cumulative Sum Calculation
    for (int i = 1; i < countsize; i++)
    {
        count[i] = count[i - 1] + count[i];
    }

    PrintArray(count, countsize);

    /// Step 5: Sorted Array 'final' Genaration
    int final[n];
    for(int i =n-1;i>=0;i--){
        count[array[i]]--; //
        final[count[array[i]]]=array[i];
    }

    PrintArray(final, n);

    return 0;
}

