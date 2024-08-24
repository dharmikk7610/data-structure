#include<stdio.h>
#include<conio.h>
#define size 5

int a[size],i,j,currunt;

void main()
{
    for(i=0;i<size;i++)
    {
        printf("\nEnter a a[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=1;i<size;i++)
    {
        currunt =a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>currunt)
            {
                a[j+1]=a[j];
                //j--;
            }
           else{
                break;
            }

        }
        a[j+1]=currunt;
    }

     for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
      //  scanf("%d",&a[i]);
    }
}
