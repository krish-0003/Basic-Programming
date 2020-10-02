
/*--------------------------------------------------------------------------------*/
/* (1-A)*/
#include<stdio.h>
struct employee
{
char name[20];
int empid;
long salary;
int yearofjoining;
char designation[25];

};
void main()
{
   int i,j,temp,rem,empno=5;
int flag=20;
   struct employee e1[5];
   for(i=0;i<5;i++)
   {
       printf("\n enter employee  name , empid , salary , designation\n");

scanf("%s",&e1[i].name);
scanf("%d",&e1[i].empid);
scanf("%ld",&e1[i].salary);
scanf("%s",&e1[i].designation);


   }
for(i=0;i<5;i++)
{
    printf("\n\nemployee name is %s \n employee id is %d \n employee salary is %ld \n employee desi is %s",e1[i].name,e1[i].empid,e1[i].salary,e1[i].designation);

}

printf("\n enter emp id which you want to remove  ");
scanf("%d",&rem);
for(i=0;i<5;i++)
{
    if(e1[i].empid==rem)
    {
        flag=i;
    }
}
if(flag>=0 && flag<5)
{
    for(i=flag;i<empno-1;i++)
    {
        e1[i]=e1[i+1];
    }
    empno--;
}
else
{
    printf("\n invalid");
}
printf("\nfinal list is\n-----------------------------\n");
for(i=0;i<empno;i++)
{
    printf("employee name is %s \n employee id is %d \n employee salary is %ld \n employee desi is %s",e1[i].name,e1[i].empid,e1[i].salary,e1[i].designation);

}
}
/*
output:

 enter employee  name , empid , salary , designation
rqw
1
8965
er

 enter employee  name , empid , salary , designation
eee
2
8942
fc

 enter employee  name , empid , salary , designation
ssdf
3
7895
gh

 enter employee  name , empid , salary , designation
efrt
4
3256
hj

 enter employee  name , empid , salary , designation
opun
5
7895
kj


employee name is rqw
 employee id is 1
 employee salary is 8965
 employee desi is er

employee name is eee
 employee id is 2
 employee salary is 8942
 employee desi is fc

employee name is ssdf
 employee id is 3
 employee salary is 7895
 employee desi is gh

employee name is efrt
 employee id is 4
 employee salary is 3256
 employee desi is hj

employee name is opun
 employee id is 5
 employee salary is 7895
 employee desi is kj
 enter emp id which you want to remove  3

final list is
-----------------------------
employee name is rqw
 employee id is 1
 employee salary is 8965
 employee desi is eremployee name is eee
 employee id is 2
 employee salary is 8942
 employee desi is fcemployee name is efrt
 employee id is 4
 employee salary is 3256
 employee desi is hjemployee name is opun
 employee id is 5
 employee salary is 7895
 employee desi is kj



*/


/*-----------------------------------------------------------------------------------------------------*/


/*(1-B)*/

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



