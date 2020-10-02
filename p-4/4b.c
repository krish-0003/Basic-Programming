
#include<stdio.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head=0;
void insert(int d,struct node **head)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=0;
    if(*head==0)
    {
        *head=newnode;
    }
    else{
            struct node *trav;
      trav=*head;
      while(trav->next != 0)
      {
          trav=trav->next;

      }
       trav->next=newnode;
    }
}
void display(struct node *p)
 {

    while(p)
    {

      printf("%d   ",p->data);
        p=p->next;
    }

}

void main()
{
  int i,n,data;

   do {
        printf("\n enter the data :");
        scanf("%d",&data);
    insert(data,&head);
     printf("want to insert (1/0) : ");
  scanf("%d",&n);
    }while(n!=0);
printf("\n Original List: \n ");
    display(head);
}
