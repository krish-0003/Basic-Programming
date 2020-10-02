#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,x,l1,l2,c=0,j,x1=1,ans;
    char primary[15][20],secondary[20];
    printf("enter the no. of primary word ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n enter the %d primary word :",i+1);
        scanf("%s",primary[i]);
    }

     for(i=0;i<n;i++)
    {
        printf("\n the primary word is : %s",primary[i]);

    }
while(x1)
{


    srand(time(0));
    x=rand()%n;
    printf("\n----------------------------------\n");
    printf("\n your question is : %s",primary[x]);
    printf("\n enter your anagram word :");
    scanf("%s",secondary);
    l1=strlen(primary[x]);
    l2=strlen(secondary);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l1;j++)
            {
                if(primary[x][i]==secondary[j])
                    c++;
            }
        }

        if(c==l1)
        {
            printf("\nyour word is anagram");
        }
        else
        {
            printf("\n your word is not anagram");
        }
    }
    else
        {printf("\n your word is not anagram");}

        printf("\n \n would you like to play this game ones again ? (1/0) ");
        scanf("%d",&ans);
        if(ans==1)
        {
        x1=1;
        }
        else
           {x1=0;}
}
}


/*
OUTPUT
--------------------------------
enter the no. of primary word 5

 enter the 1 primary word :eat

 enter the 2 primary word :earth

 enter the 3 primary word :no

 enter the 4 primary word :abc

 enter the 5 primary word :fghj

 the primary word is : eat
 the primary word is : earth
 the primary word is : no
 the primary word is : abc
 the primary word is : fghj
----------------------------------

 your question is : no
 enter your anagram word :on

your word is anagram

 would you like to play this game ones again ? (1/0) 0
*/
