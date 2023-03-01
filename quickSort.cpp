#include<bits/stdc++.h>

using namespace std;
void PRINTARRAY(int arr[], int n);
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int lb, int ub){

    int pivot = lb;
    int start=lb;
    int end = ub;

    while(start<end){
        while(arr[start]<=arr[pivot])
            start++;
        while(arr[end]>arr[pivot])
            end--;
        if(start<end){
            swap(&arr[start], &arr[end]);
        }
    }

    swap(&arr[pivot], &arr[end]);
    return end;

}


void quickSort(int arr[], int lb, int ub, int len)
{
    if(lb<ub)
    {
        int loc = partition(arr,lb,ub);
        PRINTARRAY(arr,len);
        quickSort(arr,lb,loc-1,len);
        quickSort(arr,loc+1, ub,len);
        
    }
}

void PRINTARRAY(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<<endl <<endl;
}

int main()
{
    int arr [] = {7,2,1,80,9,11,1,4,88};
    int len = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,len-1, len);
    PRINTARRAY(arr,len);
    return 0;
}
