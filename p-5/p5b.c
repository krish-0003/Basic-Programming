
#include<stdio.h>
struct node{
int coeff,expo;
struct node *next;
};
struct node *newnode,*temp,*head=0,*head2=0,*head3=0;
void insert(int co,int ex,struct node **head)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=co;
    newnode->expo=ex;
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

void insert2(int co2,int ex2,struct node **head2)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=co2;
    newnode->expo=ex2;
    newnode->next=0;
    if(*head2==0)
    {
        *head2=newnode;
    }
    else{
            struct node *trav;
      trav=*head2;
      while(trav->next != 0)
      {
          trav=trav->next;

      }
       trav->next=newnode;
    }
}

/*void add(struct node *p,struct node *p1)
{

     while(p)
    {
        result=(struct node*)malloc(sizeof(struct node));
    result->next=0;
       if(head3==0)
       {
    result->coeff=p->coeff;
       result->expo= p->expo;
           head3=temp=result;
             p=p->next;
       }
       else{
        result->coeff=p->coeff;
       result->expo= p->expo;
        result->next=temp;
       temp=temp->next;
        p=p->next;

    }
    }
    while(p)
    {
        printf("%dx^%d+   ",p->coeff,p->expo);
        p=p->next;
    }
     while(p1)
    {
        result=(struct node*)malloc(sizeof(struct node));
    result->next=0;
        result->coeff=p1->coeff;
       result->expo= p1->expo;
        result->next=temp;
       temp=temp->next;
        p1=p1->next;
    }

}
*/
void sort(struct node **h1)
{
   struct node *t,*m;
    for(t = *h1; t != 0; t = t -> next)
    {
        for(m = t -> next; m != 0; m = m -> next)
        {
            if(t -> expo > m -> expo)
            {
                int temp,temp1;
                temp = t -> expo;
                temp1 = t -> coeff;
                t -> expo = m -> expo;
                t -> coeff = m -> coeff;
                m -> expo = temp;
                m -> coeff = temp1;
            }
        }
    }

}
void add(struct node **t1,struct node **t2)
{
    struct node *s0 = *t1;
    struct node *s1 = *t2;
    while(s0 != 0 || s1 != 0)
    {
        if(s0 -> expo < s1 -> expo)
        {
            insert(s0 -> coeff, s0 -> expo , &head3);
            s0 = s0 -> next;
        }
        else if(s1 -> expo < s0 -> expo)
        {
            insert(s1 -> coeff, s1 -> expo , &head3);
            s1 = s1 -> next;
        }
        else if(s0 -> expo == s1 -> expo)
        {
            insert((s0 -> coeff + s1 -> coeff), s0 -> expo, &head3);
            s1 = s1 -> next;
            s0 = s0 -> next;
        }
    }
    if(s0 != 0)
    {
        while(s0!= 0)
        {
            insert(s0 -> coeff, s0 -> expo , &head3);
            s0 = s0 -> next;
        }
    }
    else
    {
        while(s1 != 0)
        {
            insert(s1 -> coeff, s1 -> expo , &head3);
            s1 = s1 -> next;
        }
    }
}
void display(struct node *pd)
{
    while(pd)
    {
        printf("%dx^%d+   ",pd->coeff,pd->expo);
        pd=pd->next;
    }
printf("\n\n");

}
void main()
{
  int i,n,co,ex,co2,ex2;
  printf("enter the  value of n : ");
  scanf("%d",&n);
    printf("\n enter detail of poly-1 \n :");
    for(i=1;i<=n;i++)
    {
          printf("\n enter co-efficient of poly-1 term %d:",i);
          scanf("%d",&co);
          printf("\n enter exponent of poly-1 term %d :",i);
          scanf("%d",&ex);
    insert(co,ex,&head);
    }

     printf("\n enter detail of poly-2 \n :");
    for(i=1;i<=n;i++)
    {
          printf("\n enter co-efficient of poly-2 term %d:",i);
          scanf("%d",&co2);
          printf("\n enter exponent of poly-2 term %d:",i);
          scanf("%d",&ex2);
    insert2(co2,ex2,&head2);
    }
sort(&head);
sort(&head2);

//add(head,head2);
display(head);
display(head2);
add(&head,&head2);
display(head3);
     //  display(head2);
}
