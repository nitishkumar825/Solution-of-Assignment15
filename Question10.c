// Write a function in C to countthe frequency of each elements of an array.

#include <stdio.h>

void SortTheArray(int a[],int n){
    int pass,i,flag=0;
    for(pass=1;pass<n;pass++){
        for(i=0;i<n-pass;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

void FrequencyOfDistinctElements(int a[],int n){
    SortTheArray(a,n);
    int count,i,j;
    for(i=0;i<n;i=j){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                count++;
            else
                break;
        }
        printf("Frequency of %d - %d\n",a[i],count);
    }
}