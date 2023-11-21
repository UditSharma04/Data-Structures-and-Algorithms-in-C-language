#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack \n",val);
    } 
    else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* s, int i){
    int arrayInd = s->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}

int stackTop(struct stack* s){
    return s->arr[s->top];
}
 
int stackBottom(struct stack* s){
    if (s->top==-1)
    {
        printf("Stack is empty\n");
        return -1;
    } else {
        return s->arr[0];
    }
    
}

int main()
{
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack is created\n");

    // Pushing an element manually
    // s->arr[0] = 7;
    // s->top++;

    //  Checking if stack is empty
    // if (isEmpty(s))
    // {
    //     printf("The stack is empty");
    // }
    // else
    // {
    //     printf("The stack is not empyt");
    // }
    
    //  Checking if stack is Full
    // if (isFull(s))
    // {
    //     printf("The stack is Full");
    // }
    // else
    // {
    //     printf("The stack is not full");
    // }


    // Push
    printf("Before pushing isFull: %d\n",isFull(s));
    printf("Before pushing Empty: %d\n",isEmpty(s));
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
    push(s,9);
    push(s,10); // 10 values pushed till now
    push(s,11); // 11th element will not be pushed as overflow
    printf("After pushing isFull: %d\n",isFull(s));
    printf("After pushing isEmpty: %d\n",isEmpty(s));

    // Pop
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s));
    //  printf("Popped %d from the stack\n", pop(s)); // At this point stack is empty
    //  printf("isEmpty: %d\n",isEmpty(s));
     
    //  printf("Popped %d from the stack\n", pop(s));

    // Peeking the whole stack
    // for (int j = 1; j <= s->top + 1; j++)
    // {
    //     printf("The value at position %d is %d\n", j, peek(s, j));
    // }

    // Top and bottom element of the stack
    printf("The top most value of this stack is %d\n", stackTop(s));
    printf("The bottom most value of this stack is %d\n", stackBottom(s));

    return 0;
}