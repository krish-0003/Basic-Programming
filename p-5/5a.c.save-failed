#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode,*temp,*head=0,*temp1;
  void insert(int d,struct node **head,int choice)
{
if(choice==1)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=*head;
    newnode->prev=0;
    if(*head!=0)
    {
        (*head)->prev=newnode;
    }
   *head=newnode;
    }
if(choice==2)
    {
         newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=0;
     if(*head==0)
    {
        newnode->prev=0;
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
       newnode->prev=trav;
    }
    }
if(choice==3)
{
    /*int pos,i=1,i1=1;

     printf("\n enter position : ");
        scanf("%d",&pos);
    temp=(*head);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
     while(i1<pos+1)
    {
        temp1=temp1->next;
        i1++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=0;
    newnode->prev=temp->next;
    newnode->next=temp1->prev;
*/
}

}


/*
void display(struct node **head)
{
    struct node *trav;
      trav=*head;
      while(trav->next != 0)
      {
          printf("%d ",trav->data);
          trav=trav->next;

      }
}*/
void removefile()
{
	struct node *p,*q;
	int l,a;
	printf("Enter the location of song which you want to remove : ");
	scanf("%d",&l);

	if(l==1)
	{
		q=head;
		head=head->next;
		q->next=NULL;
		head->prev=NULL;
	}
	else{


	}
}


void main()
{
    int n,c,d,i;
    printf("how many song would you like to add in playlist:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        printf("1.insertion in front 2.insertion in last 3.insertion in middle");
        printf("\n enter choice : ");
        scanf("%d",&c);
        printf("\n enter the data : ");
        scanf("%d",&d);
    insert(d,&head,c);
    }
  //  display(&head);

}
