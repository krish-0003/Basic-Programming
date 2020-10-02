#include<stdio.h>
struct date
{
    unsigned short int d : 5;
    unsigned short int m : 4;
    unsigned short int y;
};
int main()
{
    struct date *ptr;
    struct date d = {11,8,2020};
    ptr = &d;
    printf("%d %d %d\n",d.d, d.m, d.y);
    printf("%d %d %d\n",ptr->d, ptr->m, ptr->y);
    printf("size of structure is : %d",sizeof(d));
    
}