#include<stdio.h>
 struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head=0;
void main()
{
  int i,n;

  printf("enter the  value of n : ");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

      newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=i;
    newnode->next=0;
     if(head==0)
    {
        head=newnode=temp;
    }
      else{
       temp->next=newnode;
       temp=newnode;
    }
    }

   temp=head;
   while(temp!=0)
   {
       printf("%d",temp->data);
       temp=temp->next;
   }

}
