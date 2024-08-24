#include<stdio.h>
#define size 10

// .............two array merge ....

void merge(int a[],int b[],int c[])
{
    int i=0,j=0,k=0;
    while(i<5&&j<5)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<5)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<5)
    {
        c[k]=a[j];
        k++;
        j++;
    }

}

void main()
{
    int b[5]= {1,2,3,4,5};
    int a[5]= {11,22,34,45,55};
    int c[size];

    merge(a,b,c);
    for(int i=0;i<size;i++)
    {
        printf("%d\t",c[i]);
    }

}



