#include<stdio.h>
#include<string.h>
#define size 10
char stack[10];
int top=-1;

void push(char);
void pop();

void main()
{
int i,n;
char a[100];
printf("\nenter the string :");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
    push(a[i]);

}
for(i=0;i<n;i++)
{
    pop();
}
}

void push(char ch)
{
    if(top==size-1)
    {
        printf("\n stack is overflow");
    }
    else
    {
        top=top+1;
        stack[top]=ch;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n stack is in empty");
    }
    else
    {
        printf("%c",stack[top]);
        top--;
    }
}



/*
output:

enter the string :krish
hsirk
*/
