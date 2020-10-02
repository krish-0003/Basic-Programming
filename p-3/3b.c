#include<stdio.h>
int front=-1;
int rear=-1;
//higher the number higher the priority....................................
struct p
{
int data,pri;

}pqueue[5],temp,p1queue[5];

void enqueue()
{
    int dt,pn;
    if(rear==(5-1))
      {
          printf("queue is overflow");

      }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;

    }
    else
        {rear++;}
    printf("\n enter the data : ");
    scanf("%d",&dt);
    printf("\n enter the priority : ");
    scanf("%d",&pn);
    pqueue[rear].data=dt;
     pqueue[rear].pri=pn;
}

void dequeue()
{
    int max=0,position=0,i;
     if(rear==-1 && front==-1)
        printf("queue is underflow");
    else if(front==rear)
    {
    printf("\n your deleted element is : %d at %d priority",pqueue[rear].data,pqueue[rear].pri);
    front=-1;
    rear=-1;
    }
    else
    {
   for(i=front;i<=rear;i++)
   {
       if(pqueue[i].pri>=max)
       {
         max=pqueue[i].pri;
        //position=i;
       }

   }
        for(i=front;i<=rear;i++)
       {
       if(max==pqueue[i].pri)
       {position=i;
       printf("\n your deleted element is : %d at %d priority",pqueue[position].data,pqueue[position].pri);
       break;
       }
       }
       for(i=position;i<=rear;i++)
       {
        pqueue[i].data=pqueue[i+1].data;
        pqueue[i].pri=pqueue[i+1].pri;
       }
       rear--;
    }
    }


void display()
{
  int i,j;

   for(i=front;i<=rear;i++)
    {
      p1queue[i].data=pqueue[i].data;
       p1queue[i].pri=pqueue[i].pri;
    }
    //p1queue=pqueue;

    for(i=0;i<=rear;i++)
    {
        for(j=i+1;j<=rear;j++)
        {
            if(p1queue[j].pri>p1queue[i].pri)
            {
                temp=p1queue[i];
                p1queue[i]=p1queue[j];
                p1queue[j]=temp;
            }

        }
    }
     for(i=front;i<=rear;i++)
    {
         if(rear==-1 && front==-1)
       {
           printf("\n queue is empty");

       }
       else
        printf("d:%d - p:%d \t ",p1queue[i].data,p1queue[i].pri);
    }


}

void main()
{
    printf(" higher the number higher the priority");
    int ch,a=1,again;
    printf("\n 1.(insertion) \n 2.(deletion) \n 3.(display) \n enter the choice :");
       scanf("%d",&ch);

       if(ch<=0 || ch>=4)
       {
            printf("\n re-enter the value \n 1.insertion\n2.deletion\n3.display\n enter the choice :");
       scanf("%d",&ch);
       }
       while(a)
       {
  switch(ch)
  {

  case 1:

        enqueue();
        break;
  case 2:

         dequeue();
         break;
    case 3:
        printf("\your pqueue is\n");
         display();
         break;

    }
    printf("\n would you like to do any operation  again (1/0):");
    scanf("%d",&again);
    if(again==1)
       {
    a=1;
          printf("\n 1.(insertion) \n 2.(deletion) \n 3.(display) \n enter the choice :");
       scanf("%d",&ch);
       }
    else
        a=0;

       }
}

/*
 higher the number higher the priority
 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :1

 enter the data : 85

 enter the priority : 6

 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :1

 enter the data : 42

 enter the priority : 9

 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :1

 enter the data : 23

 enter the priority : 5

 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :1

 enter the data : 265

 enter the priority : 9

 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :3
your pqueue is
d:42 - p:9       d:265 - p:9     d:85 - p:6      d:23 - p:5
 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :2

 your deleted element is : 42 at 9 priority
 would you like to do any operation  again (1/0):1

 1.(insertion)
 2.(deletion)
 3.(display)
 enter the choice :3
your pqueue is
d:265 - p:9      d:85 - p:6      d:23 - p:5
 would you like to do any operation  again (1/0):
*/
