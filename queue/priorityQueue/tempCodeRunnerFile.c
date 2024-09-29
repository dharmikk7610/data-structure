//   .................... using Lickedlist..............
#include<stdio.h>
#include<stdlib.h>
struct node{

   int data;
   struct node *next;
   int priorty;
}*head=NULL,*last=NULL;
// void deleteany(int)