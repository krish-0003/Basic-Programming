#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *newnode,*temp,*tail,*head=0,*trav,*crr;
void playlist(int ch)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(ch==1)
    {
        if(head==0)
        {
            head=newnode=temp=crr;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    else if(ch==2)
    {
         head->prev=newnode;
            newnode->next=head;
            head=newnode;
    }
    else{
            int i=1,p;
         printf("\n enter the specific Position (data will be added after this position ): ");
        scanf("%d",&p);
       /* if(p<=0 || p>pos)
        {
            printf("\n invalid Position no .");
        }
        else
        {*/
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

}
void display()
{
	  struct node *ptr;
    ptr=head;
    while(ptr!=0)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int select,ch;
do{
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
        printf(" : where do you want to insert new file :\n 1.create A playlist (at the end )\n 2.At Begining \n 3.At Specific Position\n enter your choice : ");
        scanf("%d",&ch);
playlist(ch);
        break;
        case 2: display();
        break;
        case 3:
            break;
		}
	}while(select!=9);
		/*	case 2 :
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

*/



    return 0;

}


/*



*/
