#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){
    while(ptr!=0){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next; 
    } 
}

struct Node *insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtIndex(struct Node * head,int data,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAfterNode(struct Node * head,struct Node * previousNode,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previousNode->next;
    previousNode->next = ptr;
    return head;
}


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // Lets make a sample linked list of four nodes
    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    // printf("Linked list before insertion\n");
    // linkedListTraversal(head);
    
    // head = insertAtFirst(head , 56);
    // head = insertAtIndex(head , 56,1);
    // head = insertAtEnd(head , 56);
    // // head = insertAfterNode(head , third,56);
    // printf("Linked list after insertion\n");
    // linkedListTraversal(head);

    printf("Linked list before deletion\n");
    linkedListTraversal(head);


    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}