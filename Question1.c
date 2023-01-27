// write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int GreatestElement(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++)
        if(max<a[i])
            max=a[i];
    return max;
}