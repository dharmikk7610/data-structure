#include<stdio.h>
#include<conio.h>
#define size 10

void merge(int a[],int b[],int c[])
{

    int s1 = size/2;
    int s2 = size-s1;
    int i=0;
    int j=0;
    int k=0;

    while(i<s1 && j<s2)
    {
        if(a[s1]<b[s2])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<s1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        c[k]=b[j];
        k++;
        j++;
    }


}



int main()
{
    int a[] = {12,34,45,55,67};
    int b[] = {1,2,3,4,5};
    int c[size];
    merge(a,b,c);
     for(int i=0;i<size;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
