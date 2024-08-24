#include<stdio.h>
#include<conio.h>
int no=1;
void print(int count)
{

    if(no>count)
    {
        return ;
    }
    else{
        printf("%d",no);
        no++;
        print(count);
    }
}

void main()
{
    int count;
    printf("\nEnter a count=");
    scanf("%d",&count);
    print(count);
}



