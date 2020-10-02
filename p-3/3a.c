#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void Printrequest(int x)
{
    if(rear==(N-1))
        printf("queue is overflow");
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }


}
void CurrentJobProcessing()
{
    if(rear==-1 && front==-1)
        printf("queue is underflow");
    else if(front==rear)
    {
        printf("\n %d is Printed(deleted) from the queue :",queue[front]);

        front=-1;
        rear=-1;

    }
    else
    {
    printf("\n %d is Printed(deleted) from the queue :",queue[front]);
        front++;
    }


}
void SpoolRequest()
{
    int i;
    if(rear==-1 && front==-1)
        printf("queue is underflow");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d   ",queue[i]);
        }
    }


}
void main()
{

    int x,ch,a=1,again;
    printf("\n 1.Printrequest(insertion) \n 2.CurrentJobProcessing(deletion) \n 3.SpoolRequest(display) \n enter the choice :");
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
        printf("\nenter the value which you want to insert in queue :");
        scanf("%d",&x);
        Printrequest(x);
        break;
  case 2:

         CurrentJobProcessing();
         break;
    case 3:
        printf("\your queue is\n");
         SpoolRequest();
         break;

    }
    printf("\n would you like to do any operation  again (1/0):");
    scanf("%d",&again);
    if(again==1)
       {
    a=1;
         printf("\n 1.Printrequest(insertion) \n 2.CurrentJobProcessing(deletion) \n 3.SpoolRequest(display) \n enter the choice :");
       scanf("%d",&ch);
       }
    else
        a=0;

       }
}

/*

 1.Printrequest(insertion)
 2.CurrentJobProcessing(deletion)
 3.SpoolRequest(display)
 enter the choice :1

enter the value which you want to insert in queue :56

 would you like to do any operation  again (1/0):1

 1.Printrequest(insertion)
 2.CurrentJobProcessing(deletion)
 3.SpoolRequest(display)
 enter the choice :1

enter the value which you want to insert in queue :78

 would you like to do any operation  again (1/0):1

 1.Printrequest(insertion)
 2.CurrentJobProcessing(deletion)
 3.SpoolRequest(display)
 enter the choice :2

 56 is Printed(deleted) from the queue :
 would you like to do any operation  again (1/0):1

 1.Printrequest(insertion)
 2.CurrentJobProcessing(deletion)
 3.SpoolRequest(display)
 enter the choice :1

enter the value which you want to insert in queue :92

 would you like to do any operation  again (1/0):1

 1.Printrequest(insertion)
 2.CurrentJobProcessing(deletion)
 3.SpoolRequest(display)
 enter the choice :3
your queue is
78   92
 would you like to do any operation  again (1/0):


*/
