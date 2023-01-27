// Write a function to find the first occurrence of adjacent duplicate values in the array, Function has to return the value of the element.

#include <stdio.h>

int GetOccurrence(int a[],int n){
    int i;
    for(i=0;i<n-1;i++)
        if(a[i]==a[i+1])
            return a[i];
    return 0;
}