// Input: s = "([])"

// Output: true

#include<stdio.h>
#define size 10
int st[size];
int top=-1;

void push(char x)
{
    top++;
    st[top]=x;
    printf("%c\t",x);
}
void pop()
{
    char y = st[top];
    top--;
    printf(" \ndelete %c\t",y);

}
void validpara(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            push(s[i]);
        }

        else if(st[top]=='(' && s[i]==')'||
                st[top]=='[' && s[i]==']'|| 
                st[top]=='{' && s[i]=='}')
                {
                    pop();
                }
    }

 if(top==-1)
{
    printf("true");
}
else{
    printf("false");
}

}  //end of function




void main()
{
    
    char s[]="([]){";
    validpara(s);
}