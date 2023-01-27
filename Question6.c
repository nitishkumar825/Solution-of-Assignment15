// Write a function in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>

void DisplayInReverse(){        // Displaying elements in reverse after reading inputs form the user...
    int n;
    printf("\nEnter a value for n: ");
    scanf("%d",&n);
    int a[n];
    printf("\n------ Enter %d numbers ------\n",n);
    for(int i=n-1;i>=0;i--)
        scanf("%d",&a[i]);
    printf("\nArray in Reverse: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}