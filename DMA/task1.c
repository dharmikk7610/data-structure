#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr,i,no,sum=0,max;

    printf("\nEnter a number of elements:");
    scanf("%d",&no);

    ptr = (int*)malloc(no*sizeof(int));

    if(ptr==NULL)
    {
        printf("\n memory is not allocated...");
    }
    printf("\nEnter a number:");
    for(i=0;i<no;i++)
    {
        scanf("%d",ptr+i);
        sum = sum + *(ptr+i);
    }
     max = *(ptr+0);
    for(i=0;i<no;i++)
    {
        if(max<*(ptr+i)){
            max = *(ptr+i);
        }
    }
    printf("\n sum and max =%d and %d ",sum,max);

    free(ptr);


}
