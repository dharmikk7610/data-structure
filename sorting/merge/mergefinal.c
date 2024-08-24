#include<stdio.h>

void merge(int a[],int start, int mid,int end)
{
    int i,j,k;
    int s1 = mid-start+1;
    int s2 = end-mid;

    int x[s1];
    int y[s2];

    for(i=0;i<s1;i++)
    {
        x[i]=a[start+i];
    }
    for(j=0;j<s2;j++)
    {
        y[j]=a[mid+j+1];
    }

    i=0;
    j=0;
    k=start;
    while(i<s1 && j<s2)
    {
        if(x[i]<y[j])
        {
            a[k]=x[i];
            k++;
            i++;
        }
        else{
            a[k]=y[j];
            k++;
            j++;
        }
    }
    while(i<s1)
    {
        a[k]=x[i];
        k++;
        i++;
    }
    while(j<s2)
    {
        a[k]=y[j];
        k++;
        j++;
    }



}


void mergesort(int a[],int start,int end)
{
    if(start<end)
    {
        int mid = (start+(end-1))/2;

        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }

}
void printmerge(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}

void main()
{
    int a[5] ={12,23,44,55,13};
    int size = sizeof(a) / sizeof(int);   //20/4=5

    mergesort(a,0,size-1);
    printmerge(a,size);

}
