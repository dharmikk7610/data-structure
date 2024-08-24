#include<stdio.h>
#define size 10

//merge sorting:




 int i=0,j=0,k=0;


int  main()
{
    int a[] ={1,2,3,4,5};
    int b[] = {10,20,30,40,50};
    int c[size];

    while(j<5&&k<5)
    {
     if(a[j]<b[k])
     {
         c[i]=a[j];
         j++;

     }
     else{
        c[i]=b[k];
        k++;
     }
     i++;


    }
     while (j< 5) {
        c[i] = a[j];
        i++;
        j++;
    }


    while (k< 5) {
        c[i] = b[k];
        i++;
        k++;
    }

    for(i=0;i<size;i++)
    {
        printf("\n%d",c[i]);
    }



   //
   return 0;

}

