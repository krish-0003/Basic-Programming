#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Stack
{
    int top;
    int capacity;
    int *array;
};

// create stack
struct Stack *create_stack(int cap)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = cap;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// to check stack is full or not
bool isFull(struct Stack *s){
    if(s->top == s->capacity-1)
        return true;
    return false;
}


// to check stack is empty or not
bool isEmpty(struct Stack *s){
    if(s->top == -1)
        return true;
    return false;
}

// push element
void push(struct Stack *s){
    if(isFull(s)){
        printf("Stack is Full\n");
        return;
    }
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    s->array[++s->top] = num;
}

// pop element
int pop(struct Stack *s){
    if(isEmpty(s)){
       // printf("Stack is Empty\n");
        return INT_MIN;
    }
    return s->array[s->top--];  // first return then decrement
}

// return top element
int peek(struct Stack *s){
    if(isEmpty(s)){
       // printf("Stack is Empty\n");
        return INT_MIN;
    }
    return s->array[s->top];
}

/// ------>  main <------ ///
int main()
{
    int s;
    printf("Enter size of stack : ");
    scanf("%d",&s);
    struct Stack *stack = create_stack(s);
    int choice;
    while(1){
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. Top element\n");
        printf("4. Exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push(stack);
                break;
            case 2:
                printf("Poped element is : %d\n",pop(stack));
                break;
            case 3:
                printf("Top element is : %d\n",peek(stack));
                break;
            case 4:
                printf("Thank You ...");
                exit(0);
                break;
            default:
                printf("Enter valide choise\n");
                break;
        }
    }
}