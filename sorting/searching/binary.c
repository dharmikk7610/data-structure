#include<stdio.h>
#define size 5 
int i,j,min=0,max,mid,key,index=-1;
int arr[size];
int searching(int arr[],int key,int min,int max)
{
    if(min<=max)
    {
        mid=(min+max)/2;
        if(arr[mid]==key)
        {
            index = mid;
            return index;
        }
        if(arr[mid]>key)
        {
            return searching(arr,key,min,mid-1);
        }
        else{
           return  searching(arr,key,mid+1,max);
        }
    }
    return -1;
}

void main()
{
    for(i=0;i<size;i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&arr[i]);

    }
    printf("Enter a key:");
    scanf("%d",&key);
    
    j = searching(arr,key,0,size-1);
    if(j==-1)
     {
         printf("\n%d is not found..",key);
     }
     else{
         printf("%d is found at %d index",key,j);
     }
    
    // min=0;
    // max = size-1;
    // mid = (min+max)/2;
    // while(min<=max)
    // {
    //     if(arr[mid]==key)
    //     {
    //         index=mid; 
    //         break;
    //     }
    //     else if(key>arr[mid])
    //     {
    //         min= mid+1;
    //         mid= (min+max)/2;
    //     }
    //     else{
    //         max = mid-1;
    //         mid = (min+max)/2;
    //     }
    // }
    // 
}