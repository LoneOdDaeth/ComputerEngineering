#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addhead(struct node *head, int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> next = head;
    head = temp;
    return head;
}

struct node *addlast(struct node *head, int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> next = head;
    struct node *temp2 = head;
    while (temp2 -> next != NULL)
        temp2 = temp2 -> next;
    temp2 -> next = temp;
    return head;
}

int count(struct node *head)
{
    int counter = 0;
    while (head != NULL)
    {
        counter++;
        head = head -> next;
    }
    return counter;
}

void print(struct node *head)
{
    if (head == NULL)
        printf("Liste bos");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }
}

void listinfo(struct node *head)
{
    int counter = 1;
    while (head != NULL)
    {
        printf("%dDugumun adresi= %p", counter, head);
        printf("%dDugumun adresi= %d", counter, head -> data);
        printf("%dDugumun baglı oldugu dugumun adresi= %p", counter, head -> next);
        head = head -> next;
        counter++;
    }
}

struct node *destroy(struct node *head)
{
    if (head == NULL)
        printf("Liste bos");
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head -> next;
        free(head);
    }
    return head;
}

struct node *delete(struct node *head, int key)
{
    if (head == NULL)
        printf("Listede eleman yok");
    struct node *temp = head;
    if (head -> data == key)
    {
        head = head -> data = key;
        free(temp);
    }
    else if (temp -> next == NULL)
    {
        printf("Silmek istediginiz dugum bulunmamaktadır.");
        return head;
    }
    else 
    {
        while (temp -> next -> data != key)
        {
            if (temp -> next -> next == NULL)
            {
                printf("silmek istediginiz dugum bulunmamatkadır");
                return head;
            }
            temp = temp -> next;
        }
        struct node *temp2 = temp -> next;
        temp -> next = temp -> next -> next;
        free(temp2);
    }
    return head;
}