#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of the array : ";
    cin>>n;
    int array[n];
   
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"the array is : [ ";
    
    for (int i=0; i<n; i++){
        cout<< array[i]<<" ";
    }
    cout<<"]"<<endl;

    int i, j, temp;
    for (i=0; i<n-1; i++){
        int flag=1;
        for (j=0; j<n-i-1; j++){
            if(array[j]>array[j+1]){
                temp= array[j];
                array[j]= array[j+1];
                array[j+1]= temp;
                flag=0;
            }
            
        }
        if (flag == 1)
        {
            break;
        }
    }
    cout<<"after sort: ";
    for (i=0; i<n; i++){
        cout<<array[i]<< " ";
    }
}