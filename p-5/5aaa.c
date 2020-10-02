#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char str[10];
    struct node *next;
    struct node *prev;

};

struct node *head,*current;
void insert()
{
    int x;
    printf("1.starting\n2.end\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            begin();
            break;
        case 2:
            end();
            break;


    }
}
void begin()
{
    char str1[10];
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the name of song = ");
    scanf("%s",str1);
    strcpy(newnode->str,str1);
    newnode->prev=0;
    if(head==0)
    {
        newnode->next=0;
        head=newnode;
        current=newnode;
    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
     printf("---------------------------------------\n");

}
void end()
{
    char str1[10];
    struct node *newnode,*t;
    t=head;
    while(t->next!=0)
    {
        t=t->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the name of song = ");
    scanf("%s",str1);
    strcpy(newnode->str,str1);
    newnode->next=0;
    if(head==0)
    {
        newnode->prev=0;
        head=newnode;
        current=newnode;
    }
    else
    {
        newnode->prev=t;
        t->next=newnode;
    }
     printf("---------------------------------------\n");
}
void deletion()
{
    struct node *p=head;
    int x,i;
    printf("enter the node which you want to delete = ");
    scanf("%d",&x);
    for(i=0;i<x-1;i++)
    {
        p=p->next;
    }
    if(p->prev==0)
       {
           head=p->next;
            p->next=0;
       }
    else if(p->next==0)
        {
            p->prev=0;
            p->prev->next=0;
        }
    else
        {
            p->prev->next=p->next;
            p->next->prev=p->prev;
            p->next=0;
            p->prev=0;
        }

}

void display()
{
    struct node *p;
    p=head;
    if(head==0)
       {
           printf("list is emply.\n");
       }
    else
        {
            int i=1;
            while(p!=0)
                  {
                      printf("%d.%s\n",i,p->str);
                      p=p->next;
                      i++;
                  }
                  printf("\n");
        }
    printf("---------------------------------------\n");
}
void play_next()
{
    if(current->next==0)
    {
        printf("this is the last song\n");
    }
    else
    {
        current=current->next;
        printf("%s\n",current->str);
    }
     printf("---------------------------------------\n");

}
void play_prev()
{
    if(current->prev==0)
       {
           printf("this is thr first song\n");
       }
    else
        {
            current=current->prev;
            printf("%s\n",current->str);
        }
     printf("---------------------------------------");
}
void play_first()
{
    if(head==0)
    {
        printf("playlist is empty\n");
    }
    else
    {
        printf("%s\n",head->str);
    }
     printf("---------------------------------------\n");
}
void play_last()
{
    if(head==0)
    {
        printf("plaulist is empty");
    }
    else
    {
        struct node *p;
        p=head;
        while(p->next!=0)
              {

                  p=p->next;
              }
        printf("%s\n",p->str);
    }
     printf("---------------------------------------\n");

}
void play_spec()
{
    int x=0,i;
    struct node *p=head;
    printf("enter the no. of song = ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        p=p->next;
    }
    printf("%s\n",p->str);
     printf("---------------------------------------\n");

}
void main()
{
    head=0;
    int a=0;
    while(a!=9)
    {
        printf("---------------------------------------\n");
        printf("1.Add a playlist.\n2.delete a playlist.\n3.display playlist.\n4.play a next file.\n5.play previous file.\n6.play first file.\n7.play last file.\n8.play specefic file\n9.exit");
        printf("\nenter your choice = ");
        scanf("%d",&a);
        printf("---------------------------------------\n");
        switch(a)
        {
            case 1:
                insert();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                play_next();
                break;
            case 5:
                play_prev();
                break;
            case 6:
                play_first();
                break;
            case 7:
                play_last();
                break;
            case 8:
                play_spec();
            case 9:
                break;

        }
    }
}

