#include<stdio.h>
#include<conio.h>


void main()
{
    int a[5],i,j,min,temp;
    for(i=0;i<5;i++)
    {
        printf("\nEnter a number a[%d]:",i);  //input
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        min =i;  //  0 index insert first
        for(j=i+1;j<5;j++)
        {
            if(a[min]>a[j])
            {
                min=j;


            }

        }
        //sweping
        temp =a[min];
        a[min] =a[i];
        a[i] =temp;



    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",a[i]);   //print sorted array
    }



}
