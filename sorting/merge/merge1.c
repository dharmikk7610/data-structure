#include<stdio.h>


void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

}

void print2(int a[],int size)
{
    int size1 = size/2;
    int size2 = size-size1;
    int x[size1];
    int y[size2];
    int i=0,j=0,k=0;


    for(i=0;i<size1;i++)
    {
        x[i]=a[k];
        k++;
    }
    for(j=0;j<size2;j++)
    {
        y[j]=a[k];
        k++;
    }
    printf("\nmain soting:");
    display(a,10);
    printf("\n sub1 array:");
    display(x,size1);
    printf("\n sub2 array:");
    display(y,size2);




}

void main()
{
    int a[] = {1,2,3,5,4,11,23,24,25,26};
    print2(a,10);

}

