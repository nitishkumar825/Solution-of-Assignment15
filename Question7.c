// Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>

int GetMax(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++)
        if(max<a[i])
            max=a[i];
    return max;
}

int GetCountOfDuplicates(int a[],int n){
    int count=0;
    int max=GetMax(a,n);
    int hash[max+1];
    for(int i=0;i<=max;i++)
        hash[i]=0;
    for(int i=0;i<n;i++)
        hash[a[i]]++;
    for(int i=0;i<=max;i++)
        if(hash[i]>1)
            count++;
    return count;
}

int main()
{
    int a[]={1,1,3,3,5,5,6,6};
    printf("%d",GetCountOfDuplicates(a,8));
    return 0;
}