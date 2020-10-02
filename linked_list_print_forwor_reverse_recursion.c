#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * INSERT(struct node *p, int d){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = NULL;
    if(p==NULL)
        p=temp;
    else{
        struct node *t=p;
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
    }
    return p;
}
void PRINT(struct node *head){
    if(head==NULL)
        return;
    // printf("%d ",head->data);    // forward print
    PRINT(head->next);      // as it is
    printf("%d ",head->data);   // reverse print
}
int main()
{
    struct node *head=NULL;
    head = INSERT(head, 7);
    head = INSERT(head, 2);
    head = INSERT(head, 9);
    head = INSERT(head, 5);
    head = INSERT(head, 6);
    PRINT(head);
}