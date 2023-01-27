// Write a function in C to print all unique elements in an array.

#include <stdio.h>

void PrintUniqueElements(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
            if(a[i]==a[j])
                break;
        if(i==j)
            printf("%d ",a[i]);
    }
}