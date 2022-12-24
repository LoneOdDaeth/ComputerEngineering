//// tek bağlı doğrusal

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

// addhead
struct node *addhead(struct node *head, int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> next = head;
    temp -> data = key;
    head = temp;
    return(head);
}

//addlast
struct node *addlast(struct node *head, int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *temp1 = head;
    temp -> data = key;
    temp -> next = NULL;
    while(temp1 -> next != NULL)
        temp1 = temp1 -> next;
    temp1 -> next = temp;
    return(head);
}

//destroy
struct  node *destroy(struct node *head)
{
    if(head == NULL)
        printf("empty list");
    struct node *temp;
    while(head -> next != NULL)
    {
        temp = head;
        head -> head -> next;
        free(temp);
    }
    return(head);
}

//count
int count(struct node *head)
{
    if(head == NULL)
        return 0;
    return(count(head -> next) + 1);
}

//listinfo
void listinfo(struct node *head)
{
    int counter = 1;
    printf("%d. Düğümün adresi= %p", counter, head);
    printf("%d. Düğümün verisi= %d", counter, head -> data);
    printf("%d. Düğümden sonraki düğümün adresi= %p", counter, head -> next);
}

//print
void print(struct node *head)
{
    if(head == NULL)
        printf("empty list");
    printf("%d\t", head -> data);
    print(head -> next);
}

//// tek bağlı dairesel

//insertAtfront
void insertAtfront(int key)
{
    if(head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head -> data = key;
        head -> next = head;
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp -> data = key;
        struct node *last = head;
        while(last -> next != NULL)
            last = last -> next;
        last -> next = temp;
        temp -> next = head;
    }
}

//insertAtlast
void insertAtlast(int key)
{
    if(head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head -> data = key;
        head -> next = head;
    }
    else
    {
        struct node *last = head;
        while(last -> next != NULL)
        {
            last -> next = (struct node *)malloc(sizeof(struct node));
            last -> next -> next = head;
            last -> next -> data = key;
        }
    }
}

// //// çift bağlı doğrusal

// struct node
// {
//     struct node *next;
//     struct node *prev;
//     int data;
// }

// //insertAtfirst
// void insertAtfirst(int key)
// {
//     if(head == NULL)
//     {
//         head = (struct node *)malloc(sizeof(struct node));
//         head -> data = key;
//         head -> next = NULL;
//         head -> prev = NULL;
//     }
//     else
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         temp -> data = key;
//         temp -> next = head;
//         temp -> prev = NULL;
//         head -> prev = temp;
//         head = temp;
//     }
// }

// //insertAtend
// void insertAtend(int key)
// {
//     if(head == NULL)
//     {
//         head = (struct node *)malloc(sizeof(struct node));
//         head -> data = key;
//         head -> next = NULL;
//         head -> prev = NULL;
//     }
//     else
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         struct node *temp1 = head;
//         while(temp1 -> next != NULL)
//             temp1 = temp -> next;
//         temp -> data = key;
//         temp -> prev = temp1;
//         temp -> next = NULL;
//         temp1 -> next = temp;
//     }
// }