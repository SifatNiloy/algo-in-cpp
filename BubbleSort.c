#include<stdio.h>

int main(){

    // %d --> Integer %f--> Float %lf ---> Double %c--> Char
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int array[n];

    for(int i=0; i<n;i++){ ///Initialization, condition, Execution Block, Driving factor
        scanf("%d",&array[i]);
    }
    printf("Before Sort: ");
    for(int i =0; i<n;i++){
        printf("%d ",array[i]);
    }

    for(int i=0;i<n-1;i++){
        int flag=1;
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1) break;
    }

    printf("\nAfter Sort: ");
    for(int i =0; i<n;i++){
        printf("%d ",array[i]);
    }




    return 0;
}