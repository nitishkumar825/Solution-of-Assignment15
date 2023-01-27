// Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

int GetMaxIndex(int a[],int size,int i){
    int maxIndex=i,max=a[i];
    while(i<size)
    {
        if(max<a[i]){
            max=a[i];
            maxIndex=i;
        }
        i++;
    }
    return maxIndex;
}

void SortTheArrayInDesc(int a[],int size){
    for(int i=0;i<size;i++){
        int maxIndex=GetMaxIndex(a,size,i);
        int temp=a[maxIndex];
        a[maxIndex]=a[i];
        a[i]=temp;
    }
}

void MergeArrayOfSameSize(int a[],int b[],int size){        // Function to be called...
    int x[2*size];
    for(int i=0;i<size;i++){
        x[i]=a[i];
        x[i+size]=b[i];
    }
    SortTheArrayInDesc(x,2*size);

    for(int i=0;i<2*size;i++)
        printf("%d ",x[i]);
}