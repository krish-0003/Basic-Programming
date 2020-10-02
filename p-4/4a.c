#include<stdio.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*temp,*head=0;
struct node *head1=0;
struct node *head2=0;
struct node *head3=0;
struct node *head4=0;

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
  //  printf(" NULL");

}

void main()
{
  int i,n,data;
  printf("enter the  value of n : ");
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    insert(i,&head);
    }
printf("\n main link list : \n ");
    display(head);

      temp=head;
    for(int i=1;i<=n;i++)
    {
        int data=temp->data;
        if(data%4==1)
          insert(data,&head1);
         if(data%4==2)
            insert(data,&head2);
         if(data%4==3)
            insert(data,&head3);
         if(data%4==0)
            insert(data,&head4);
        temp=temp->next;

    }
    printf("\n link list1 \n");
    display(head1);
     printf("\n link list2 \n");
    display(head2);
     printf("\n link list3 \n");
    display(head3);
     printf("\n link list4 \n");
    display(head4);


}

/*
enter the  value of n : 15

 main link list :
 1   2   3   4   5   6   7   8   9   10   11   12   13   14   15
 link list1
1   5   9   13
 link list2
2   6   10   14
 link list3
3   7   11   15
 link list4
4   8   12
Process returned 5 (0x5)   execution time : 2.775 s
Press any key to continue.



*/
