#include<stdio.h>
#include<conio.h>
 
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void merge(int a[],int size)
{
    int s1 = size/2;
    int s2 = size-s1;
   int  x[s1];
   int y[s2];
    int i=0,j=0,k=0;

    for(i=0;i<s1;i++)
    {
        x[i]=a[k];
        k++;
    }
    for(j=0;j<s2;j++)
    {
        y[j]=a[k];
        k++;
    }


 printf("\nsubArray1:\n");   
display(x,s1);

printf("\nSubArray2:\n");
display(y,s2);


}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,23,45,55};
    merge(a,11);



    return 0;
}





