/*
Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
(For example, if an array of size 5 is [32,29,40,12,70]; n is 2 and d id left, then the resulting array after left 
rotation 2 times is [40,12,70,32,29])
*/

#include <stdio.h>
#include <string.h>

void RotateRight(int a[],int size){
    int i,temp=a[size-1];
    for(i=size-2;i>=0;i--)
        a[i+1]=a[i];
    a[0]=temp;
}

void RotateLeft(int a[],int size){
    int i,temp=a[0];
    for(i=1;i<size;i++)
        a[i-1]=a[i];
    a[size-1]=temp;
}

void RotateTheArray(int a[],int size,char d[],int n){
    if(strcmp("left",d)==0)
        for(int i=0;i<n;i++)
            RotateLeft(a,size);
    if(strcmp("right",d)==0)
        for(int i=0;i<n;i++)
            RotateRight(a,size);
}