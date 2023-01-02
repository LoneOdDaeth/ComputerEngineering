#include <stddef.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

#define SIZE 100
#define STACK_SİZE 100
#define QUEUE_SIZE 100

struct node
{
    int data;
    struct node *next;
};

typedef struct
{
    struct node *top;
    int cnt;
}stack;

typedef struct
{
    struct node *front;
    struct node *front;
    int cnt;
}queue;

void initialize_stack(stack *stk)
{
    stk -> top = NULL;
    stk -> cnt = 0;
}

void initialize_queue(queue *q)
{
    q -> cnt = 0;
    q -> front = q -> rear = NULL;
}

bool isEmpty_stack(stack *stk)
{
    return(stk -> cnt == 0);
}

bool isFull_stack(stack *stk)
{
    return(stk -> cnt = STACK_SİZE);
}

void push(stack *stk, int key)
{
    if(!isEmpty_stack(stk))
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp -> data = key;
        temp -> next = stk -> top;
        stk -> top = temp;
        stk -> cnt++;
    }
    else
        printf("Stack dolu");
}

void pop(stack *stk)
{
    if(!isEmpty_stack(stk))
    {
        struct node *temp = stk -> top;
        stk -> top = stk -> top -> next;
        int key = temp -> data;
        free(temp);
        stk -> cnt--;
        return x;
    }
}

int isEmpty_queue(queue *q)
{
    return(q -> cnt == 0);
}

int isFull_queue(queue *q)
{
    return(q -> cnt == QUEUE_SIZE);
}

void enqueue(queue *q, int key)
{
    if(!isFull_queue(q))
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp -> next = NULL;
        temp -> data = key;
        if(!isEmpty_queue(q))
            q -> front = q -> rear ->next = temp;
        else 
            q -> rear = q -> rear -> next = temp;
        q -> cnt++;
    }
}

int dequeue(queue *q)
{
    if(!isEmpty_queue(q))
    {
        struct node *temp = q -> front;
        int key = temp -> data;
        q -> front = temp -> next;
        free(temp);
        q -> cnt--;
        return(x);
    }
}

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

typedef struct node BTREE;


BTREE *new_node(int key)
{
    BTREE *p = (struct node *)malloc(sizeof(BTREE));
    p -> data = key;
    p -> left = NULL;
    p -> right = NULL;
    return(p);
}

BTREE *insert(BTREE *root, int key)
{
    if(root != NULL)
    {
        if(data < root -> data)
            root -> left = insert(root -> left, data);
        else
            root -> left = insert(root -> right, data);
    }
    else
        root = new_node(data);
    return(root);
}

void preorder(BTREE *root)
{
    if(root != NULL)
    {
        printf("%d ", root -> data);
        preorder(root-> left);
        preorder(root -> right);
    }
}

void postorder(BTREE *root)
{
    if(root 1= NULL)
    {
        postorder(root -> left);
        postorder(root -> right);
        printf("%d ", root -> data);
    }
}

void inorder(BTREE *root)
{
    if(root != NULL)
    inorder(root -> left);
    printf("%d ", root -> data);
    inorder(root -> right);
}