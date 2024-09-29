// ........Sliding Window Maximum ........
#include<stdio.h>
void main()
{
    int a[] = {4,-2,3,1,5,3,2,-1};
    int n = sizeof(a)/sizeof(int);
    // printf("%d",n);
    int k = 3;
    
    for(int i=0;i<=n-k;i++)
    {
        int max = a[i];
       for(int j=i+1;j<=i+k-1;j++)
       {
        if(a[j]>max)
        {
            max = a[j];
        }
       }
       printf("%d\t",max);
    }

}


12 23 34 45  