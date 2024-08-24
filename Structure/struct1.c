#include<stdio.h>

struct prodect{
    int pid;
    char pname[20];
    char catogary[20];
    int price;
    int qty;
}p1;
void main(){

printf("\nEnter prodectid\t pordectname\tcatogary\tprice\tqty");
scanf("%d\t%s\t%s\t%d\t%d",&p1.pid,&p1.pname,&p1.catogary,&p1.price,&p1.qty);

printf("\ndeteils of prodects...\n");
printf("\nprodect_id:%d",p1.pid);
printf("\nprodect_name:%s",p1.pname);
printf("\nprodect_catogary%s",p1.catogary);
printf("\nprodect_price%d",p1.price);
printf("\nprodect_qlty%d",p1.qty);
}
