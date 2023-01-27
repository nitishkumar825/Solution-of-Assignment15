// Write a function to sort an array of any size. (TSRN)

#include <stdio.h>

void SortTheArray(int a[],int n){
    int pass,i,flag=0;
    for(pass=0;pass<n-1;pass++){
        for(i=0;i<n-pass-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}