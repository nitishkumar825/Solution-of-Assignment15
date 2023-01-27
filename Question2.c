// Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>

int SmallestElement(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++)
        if(min>a[i])
            min=a[i];
    return min;
}

int main()
{
    int a[]={4,3,6,8,5,2,1};
    printf("%d",SmallestElement(a,7));
    return 0;
}