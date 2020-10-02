#include<stdio.h>
#include<stdlib.h>

struct Stack 
{
    int top;
    int capacity;
    int *array;
};
struct Linked_list
{
    int data;
    struct Linked_list *next;
};
struct Linked_list *Head = NULL;
struct Stack *create_stack(){
    struct Stack *stack;
    stack->top = -1;
    stack->capacity = count_node();
    stack->array = (int *)malloc(stack->capacity*sizeof(int));
    return stack;
}
void push(struct Linked_list *t, int num){
    struct Stack *s;
    s->array[++(s->top)] = t;
}
struct Linked_list *pop(){
    struct Stack *s;
    return s->array[s->top--];
}
void reverse_list(){
    struct Stack *temp_stack = create_stack();
    struct Linked_list *temp_linked_list = Head;
    while(temp_linked_list->next!=NULL){
        pop(temp_linked_list);
        temp_linked_list=temp_linked_list->next;
    }
    Head = temp_linked_list; 
    while (temp_stack!=NULL) { 
        temp_linked_list->next = pop(); 
  
        temp_linked_list = temp_linked_list->next;
    } 
      
    temp_linked_list->next = NULL; 
    // return Head; 
}
int count_node(){
    int count=0;
    struct Linked_list *temp = Head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
struct Linked_list *create_node(){
    struct Linked_list *temp;
    temp = (struct Linked_list *)malloc(sizeof(struct Linked_list));
    return temp;
}
void insert_at_last(){
    int num;
    struct Linked_list *node = create_node();
    printf("Enter number : ");
    scanf("%d",&num);
    node->data = num;
    if(Head==NULL){
        Head = node;
        node->next = NULL;
    }
    else{
        struct Linked_list *temp = Head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = node;
        node->next=NULL;
    }
}
void view_list(){
    struct Linked_list *temp=Head;
    if(Head==NULL)
        printf("List is Empty\n");
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    printf("\n");
}
int main()
{
    int choice;
    while(1){
        printf("1. Insert ar last\n");
        printf("2. Reverse Linked list\n");
        printf("3. Count node\n");
        printf("4. View list\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert_at_last();
                break;
            case 2:
                reverse_list();
                break;
            case 3:
                printf("Total node is : %d\n",count_node());
                break;
            case 4:
                view_list();
                break;
            case 5:
                printf("Thank You ...\n");
                exit(0);
                break;
            default:
                printf("Enter valid number\n");
                break;
        }
    }
}