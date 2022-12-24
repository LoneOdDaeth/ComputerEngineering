#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <ctype.h>

// #define SIZE 100
// #define STACK_SIZE 100
// #define QUEUE_SIZE 100

// struct node
// {
//     int data;
//     struct node *next;
// };

// typedef struct
// {
//     struct node *top;
//     int cnt;
// }stack;

// typedef struct
// {
//     int cnt;
//     struct *front;
//     struct node *rear;
// }queue;

// void initialize_stack(stack *stk)
// {
//     stk -> top = NULL;
//     stk -> cnt = 0;
// }

// void initialize_queue(queue *q)
// {
//     q -> ;
//     q -> front = q -> rear =NULL;
// }

// bool isempty_stack(stack *stk)
// {
//     return(stk -> cnt == 0);
// }

// bool isfull_stack(stack *stk)
// {
//     return(stk -> cnt == STACK_SIZE);
// }

////////////////////////////////////////////////////// stack(yığın) ///////////////////////////////////////////////

// void push(stack *stk, int key) //stack'e (yığına) eleman ekleme. Şeklinden dolayı yeni eleman tepeleme eklenir.
// {
//     if(!isfull_stack(stk))
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         temp -> data = key;
//         temp -> next = stk -> top;
//         stk -> top = temp;
//         stk -> cnt++;
//     }
//     else
//         printf("full stack\n");
// }

// int pop(stack *stk) //stackden eleman silme. Şeklinden dolayı tepeden eleman silinebilir.
// {
//     if(!isempty_stack(stk))
//     {
//         struct node *temp = stk -> top;
//         stk -> top = stk -> top ->next;
//         int x = temp -> data;
//         free(temp);
//         stk -> cnt--;
//         return(x);
//     }
// }

////////////////////////////////////////////////////// queue(kuyruk) ///////////////////////////////////////////////

// int isempty_queue(queue *q)
// {
//     return(q -> cnt == 0);
// }

// int isfull_queue(queue *q)
// {
//     return(q -> cnt == QUEUE_SIZE)
// }

// void enqueue(enqueue *q, int key) // kuyruğa eleman ekleme rear ksımana eklenmesiyle olur.
// {
//     if(!isfull_queue(q))
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         temp -> next = NULL;
//         temp -> data = key;
//         if(isempty_queue(q))
//             q -> front
//         else
//             q -> rear = q -> rear -> next = temp;
//         q -> cnt++;
//     }
// }

// int dequeue(queue *q) // kuruktan eleman çıkarma ilk elemandan itibaren olur. front kksımı
// {
//     if(!isempty_queue(q))
//     {
//         struct node *temp = q-> front;
//         int key = temp -> data;
//         q -> front = temp -> next;
//         free(temp);
//         q -> cnt--;
//         return(x);
//     }
// }

// ////////////////////////////////////////////////////// tree(ağaç) ///////////////////////////////////////////////

// struct node
// {
//     struct node *left;
//     struct node *right;
//     int data;
// };

// typedef struct node BTREE;

// // yeni düğüm oluşturma, bu daha çok ağacın kökü gibi bir durumdadır.
// // new_node
// BTREE new_node(BTREE *root, int key)
// {
//     BTREE *r = (BTREE *)malloc(sizeof(BTREE));
//     r -> data = key;
//     r -> left = NULL;
//     r -> right = NULL;
//     return(r);
// }

// // ağaca yeni eleman ekleme, eğer küçükse sola büyükse sağa yolla.
// // insert
// BTREE insert(BTREE *root, int key)
// {
//     if(root != NULL)
//     {
//         if(key < root -> data)
//             root -> left = insert(root -> left, key);
//         else
//             root -> right = insert(root -> right, key);
//     }
//     else
//         root = new_node(key);
//     return(root);
// }

// // sıralamalar
// // preorder: kök sol sağ
// void preorder(BTREE *root)
// {
//     if(root != NULL)
//     {
//         printf("%d ", root -> data);
//         preorder(root -> left);
//         preorder(root -> right);
//     }
// }

// // inorder: sol kök sağ
// void inorder(BTREE *root)
// {
//     if(root != NULL)
//     {
//         inorder(root -> left)
//         printf("%d ", root -> data);
//         inorder(root -> right);
//     }
// }

// // postorder: sol sağ kök
// void postorder(BTREE *root)
// {
//     if(root != NULL)
//     {
//         postorder(root -> left);
//         postorder(root -> right);
//         printf("%d ", root -> data);
//     }
// }