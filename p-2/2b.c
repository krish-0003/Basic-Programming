#include<stdio.h>
#include<string.h>
char stack[20];
int top = -1;
void push(char ch)
{
    top=top+1;
    stack[top]=ch;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int pre(char c)
{
    if(c=='+' || c=='-')
        return 1;
    if (c=='*' || c=='/')
        return 2;
    if(c=='(' || c==')')
        return 0;


}

int main(){
    int i;
    char input[20],c;
    printf("\n Enter infix expression: ");
    scanf("%s",input);
    printf("\n your postfix expression: ");
   for(i=0;i<strlen(input);i++)
        {

        if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
            printf("%c",input[i]);
        else if(input[i] == '(')
            push(input[i]);
        else if(input[i] == ')')
        {
            while((c = pop()) != '(')
                printf("%c",c);
        }
        else{
            while(pre(stack[top])>=pre(input[i]))
                printf("%c",pop());
            push(input[i]);
        }
    }
    while(top!=-1)
        printf("%c",pop());

return 0;
}


























