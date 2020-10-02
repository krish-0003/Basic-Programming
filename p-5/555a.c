
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
    struct node *next;
    struct node *prev;

};

struct node *head=0,*current;

void insert()
{
    int x;
    printf("1.starting\n2.end\n3.specific\n");
    scanf("%d",&x);
if(x==1)
{
    begin();

}
else if(x==2)
{
    end();

}
else if(x==3)
{
    specific();

}
else
    printf("\n Invalid No.");

}

void begin()
{
   int d;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the name of song = ");
    scanf("%d",&d);
    newnode->data=d;
    newnode->prev=0;
    if(head==0)
    {
        newnode->next=0;
        head=newnode;

    }
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
current=newnode;

     printf("\n\n");

}
void end()
{
    int d;
    struct node *newnode,*t;
    t=head;
    while(t->next!=0)
    {
        t=t->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the no. of song = ");
    scanf("%d",&d);
    newnode->data=d;
    newnode->next=0;
    if(head==0)
    {
        newnode->prev=0;
        head=newnode;

    }
    else
    {
        newnode->prev=t;
        t->next=newnode;
    }
      printf("\n\n");
}

void specific()
{
    int d,p,i=1;
     struct node *newnode,*trav;
     printf("\n enter the specific Position (data will be added after this position ): ");// will not applied for only one node and last node index
        scanf("%d",&p);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the no. of song = ");
    scanf("%d",&d);
    newnode->data=d;
    newnode->next=0;
    trav=head;


            while(i<p)
            {

               trav=trav->next;
                i++;
            }
            newnode->prev=trav;
            newnode->next=trav->next;
            trav->next=newnode;
            newnode->next->prev=newnode;
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
          printf("\n Playlist Song \n");
            int i=1;
            while(p!=0)
                  {
                      printf("%d\n",p->data);
                      p=p->next;
                      i++;
                  }
                  printf("\n");
        }

}
void curr()
{

    if(head==0)
    {
        printf("playlist is empty !\n");
    }
    else{
        printf("current Song is : %d \n",current->data);
    }

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
        printf("next Song is : %d\n",current->data);
    }
      printf("\n\n");

}
void play_prev()
{
    if(current->prev==0)
       {
           printf("this is the first song\n");
       }
    else
        {
            current=current->prev;
            printf("previous Song is : %d\n",current->data);
        }
       printf("\n\n");
}
void play_first()
{
    if(head==0)
    {
        printf("playlist is empty\n");
    }
    else
    {
        printf("first Song is : %d\n",head->data);
    }
     printf("\n\n");
}
void play_last()
{
    if(head==0)
    {
        printf("playlist is empty");
    }
    else
    {
        struct node *p;
        p=head;
        while(p->next!=0)
              {

                  p=p->next;
              }
        printf("last Song is : %d\n",p->data);
    }
      printf("\n\n");
}
void play_spec()
{
    int x,i;
    struct node *p=head;
    printf("enter the node no. of song = ");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        p=p->next;
    }
    printf("Specific Song is : %d\n",p->data);
      printf("\n\n");
}





void main()
{
    head=0;
    int a=0;
    while(a!=9)
    {
        printf("---------------------------------------\n");
        printf("1.Add a playlist.\n2.delete a playlist.\n3.display playlist.\n4.play current song\n5.play a next file.\n6.play previous file.\n7.play first file.\n8.play last file.\n9.play specefic file\n10.exit\n");
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
                curr();
                break;
            case 5:
                play_next();
                break;
            case 6:
                play_prev();
                break;
            case 7:
                play_first();
                break;
            case 8:
                play_last();
                break;
            case 9:
                play_spec();
                break;
            case 10:
                break;


        }
    }
}


/*
---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 1
---------------------------------------
1.starting
2.end
3.specific
1
enter the name of song = 98


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 1
---------------------------------------
1.starting
2.end
3.specific
2
enter the no. of song = 89


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 1
---------------------------------------
1.starting
2.end
3.specific
3

 enter the specific Position (data will be added after this position ): 1

 enter the no. of song = 78
---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 3
---------------------------------------

 Playlist Song
98
78
89

---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 2
---------------------------------------
enter the node which you want to delete = 2
---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 3
---------------------------------------

 Playlist Song
98
89

---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 1
---------------------------------------
1.starting
2.end
3.specific
1
enter the name of song = 25


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 1
---------------------------------------
1.starting
2.end
3.specific
2
enter the no. of song = 73


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 3
---------------------------------------

 Playlist Song
25
98
89
73

---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 4
---------------------------------------
current Song is : 25
---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 5
---------------------------------------
next Song is : 98


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 5
---------------------------------------
next Song is : 89


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 6
---------------------------------------
previous Song is : 98


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 7
---------------------------------------
first Song is : 25


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 8
---------------------------------------
last Song is : 73


---------------------------------------
1.Add a playlist.
2.delete a playlist.
3.display playlist.
4.play current song
5.play a next file.
6.play previous file.
7.play first file.
8.play last file.
9.play specefic file
10.exit

enter your choice = 9
---------------------------------------
enter the node no. of song = 3
Specific Song is : 89

*/



