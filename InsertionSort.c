#include <stdio.h>

void PrintArray(int array[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{

    // %d --> Integer %f--> Float %lf ---> Double %c--> Char
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    { /// Initialization, condition, Execution Block, Driving factor
        scanf("%d", &array[i]);
    }
    printf("Before Sort: ");
    PrintArray(array,n);

    for (int j = 1; j < n; j++)
    {
        int key = array[j];
        printf("\n\n");
        printf("j = %d and Key = %d\n",j,key);
        int i=j-1;
        while(i>=0 && array[i]>key){
            array[i+1]=array[i];
            PrintArray(array,n);
            i--;
        }
        array[i+1]=key;
        PrintArray(array,n);
        printf("\n");
    }


    printf("\nAfter Sort: ");
    PrintArray(array,n);

    return 0;
}