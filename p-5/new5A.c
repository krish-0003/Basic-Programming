#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *newnode,*temp,*tail,*head,*trav,*crr;
//temp==tail
int pos=0;
void addfile()
{

    int ch;
    int p,i=1;
  do{
    printf(" : where do you want to insert new file :\n 1.create A playlist\n 2.At Begining  \n 3.At Specific Position\n enter your choice : ");
    scanf("%d",&ch);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    switch(ch)
    {
        case 1:
        if(head==0)
        {
            head=newnode;
            crr=head;
            temp=head;

        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

        break;

        case 2:


            head->prev=newnode;
            newnode->next=head;
            head=newnode;


        break;




        case 3:
        printf("\n enter the specific Position (data will be added after this position ): ");
        scanf("%d",&p);
        if(p<=0 || p>pos)
        {
            printf("\n invalid Position no .");
        }
        else
        {
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

        break;
    }
       pos++;
  }while(ch>5||ch<0);
}
void removefile()
{
    int ch1;
      int p1,i=1;
       struct node *t;
     do{printf(" : where do you want to delete file :\n 1.At Begining \n 2.At End \n 3.At Specific Position\n enter your choice : ");
    scanf("%d",&ch1);
    switch(ch1)
    {


    case 1:
        t=head;
        head=head->next;
        head->prev=0;
        free(t);//t->next=0;
        break;
    case 2:
        t=temp;
        temp=temp->prev;
        temp->next=0;
        free(t);//t->prev=0;
        break;
    case 3:

        printf("\n enter the specific Position (data will be deleted after this position ): ");
        scanf("%d",&p1);
        if(p1<=0 || p1>pos)
        {
            printf("\n invalid Position no .");
        }
        else
        {
            trav=head;

            while(i<p1)
            {

               trav=trav->next;
                i++;
            }
            trav->prev->next=trav->next;
            trav->next->prev=trav->prev;
            free(trav);
        }

        break;
    }
     pos--;
  }while(ch1>4||ch1<0);
}


void playnext()
{
	if(crr->next==0)
		{crr=head;}
	else
		{crr=crr->next;}
	printf("\n current song : %d\n,crr->data");
}
void playprev()
{
	if(crr==head)
	{
		while(crr->next!=0)
			crr=crr->next;
	}
	else
		{crr=crr->prev;}
	printf("\n current song : %d\n,crr->data");
}
void playfirst()
{
	crr = head;
	printf("\n current song : %d\n,crr->data");
}
void playlast()
{
	while(crr->next!=0)
	crr = crr->next;
	//crr=temp;
	printf("\n current song : %d\n,crr->data");
}
void playspecific()
{
	int sno,i=1;
	printf("\nwhich song do you want to play :");
	scanf("%d",&sno);
	if(sno>pos)
	{
		printf("Invalid Song number");

	}
	else
	{
		 trav=head;

            while(i<sno)
            {

               trav=trav->next;
                i++;
            }
           crr=trav;
	}
	printf("\n current song : %d\n,crr->data");
}
void display()
{
	  struct node *ptr;
    ptr=head;
    printf(" ptr %d",ptr);
    if(ptr==0)
    {
        printf("rf");
    }
    while(ptr!=0)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    int select;
    head=0;
	do
	{
		printf("\t\tMenu");
		printf("\n1.Add new music file.\n");
		printf("2.Remove music file.\n ");
		printf("3.play next file.\n");
		printf("4.play previous file.\n");
		printf("5.play first song.");
		printf("6.play last song.\n");
		printf("7.play specific song.\n");
		printf("8.Display Songs.\n");
		printf("9.Exit\n");
		printf("\nselect number according to your choice : ");
		scanf("%d",&select);

		switch(select)
		{
			case 1 :
			        addfile();
			        break;
			case 2 :
					removefile();
					break;
			case 3 :
					playnext();
					break;
			case 4 :
					playprev();
					break;
			case 5 :
					playfirst();
					break;
			case 6 :
					playlast();
					break;
			case 7 :
					playspecific();
					break;
			case 8 :
					display();
					break;
			case 9:
					break;
			default :
					printf("Error! invalid choice.\n");

		}


	}while(select!=9);


}
