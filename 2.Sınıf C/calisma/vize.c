//-------------------------------------------------------------------------Tek Bagli Listeler-------------------------------------------------------------------------------//

// #include <stdio.h>
// #include <stddef.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *addhead(struct node *head, int key)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp -> data = key;
//     temp -> next = head;
//     head = temp;
//     return head;
// }

// struct node *addlast(struct node *head, int key)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp -> data = key;
//     temp -> next = NULL;
//     struct node *temp1 = head;
//     while (temp1 -> next != NULL)
//         temp1 = temp1 -> next;
//     temp1 -> next = temp;
//     return head;
// }

// struct node *delete(struct node *head, int key)
// {
//     if(head == NULL)
//         printf("Liste bos");
//         return;
//     struct node *temp = head;
//     if (head ->data = key)
//     {
//         head = head -> next;
//         free(temp);
//     }
//     else if (temp -> next == NULL)
//         printf("Listede istediğiniz eleman yoktur");
//     else 
//     {
//         while (temp -> next -> data != key)
//         {
//             if (temp -> next -> next == NULL)
//                 printf("İstediginiz eleman yoktur");
//                 return head;
//         }
//         struct node *temp1 = temp -> next;
//         temp -> next = temp -> next -> next;
//         free(temp1);
//     }
//     return head;
// }

// struct node *destroy(struct node *head)
// {
//     if(head == NULL)
//         printf("Liste bos");
//     struct node *temp;
//     while (head != NULL)
//     {
//         temp = head;
//         head = head -> next;
//         free(temp);
//     }
//     return head;
// }

// struct node *destroy_recursive(struct node *head)
// {
//     if(head == NULL)
//         printf("Liste bos");
//     struct node *temp;
//     while(head != NULL)
//     {
//         temp = head;
//         free(destroy_recursive(head -> next));
//     }
// }

// int count(struct node *head)
// {
//     int counter = 0;
//     while (head != NULL)
//     {
//         counter++;
//         head = head -> next;
//     }
//     return counter;
// }

// int count_recursive(struct node *head) 
// {
//     if (head == NULL)
//         return 0;
//     return count_recursive(head->next) + 1;
// }

// void print(struct node *head)
// {
//     if (head == NULL)
//         printf("Liste bos");
//         return;
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         printf("%d\t", temp -> data);
//         temp = temp -> next;
//     }
// }

// void print_recursive(struct node *head) 
// {
//     if(head == NULL)
//         return;
//     printf("%d\t", head -> data);
//     print_recursive (head -> next);
// }

// void listinfo(struct node *head)
// {
//     int counter = 1;
//     while (head != NULL)
//     {
//         printf("%dDugumun adresi= %p", counter, head);
//         printf("%dDugumun verisi= %p", counter, head -> data);
//         printf("%dDugumun baglı bulundugu dugumun adresi= %p", counter, head -> next);
//     }
// }

// int main()
// {
//     int secim,data;
//     struct node *head = NULL;
//     while(1){
//         printf("1-Listenin Basina Eleman Ekle\n");
//         printf("2-Listenin Sonuna Eleman Ekle\n");
//         printf("3-Listeyi Gorme\n");
//         printf("4-Listeden verilen bir degere sahip dugum silmek\n");
//         printf("5-Listeyi sil\n");
//         printf("6-Listedeki eleman sayisi\n");
//         printf("7-Listenin tum eleman bilgileri\n");
//         printf("8-Programdan Cikma\n");
//         printf("Seciminiz....?");
//         scanf("%d",&secim);
//         switch(secim){

//             case 1: printf("Eklemek istediginiz degerini giriniz..?");
//                 scanf("%d",&data);
//                 head=addhead(head,data);
//                 break;

//             case 2:
//                 printf("Eklemek istediginiz degerini giriniz..?");
//                 scanf("%d",&data);
//                 head=addlast(head,data);
//                 break;

//             case 3:
//                 print(head);
//                 break;
            
//             case 4:
//                 printf("Silmek istediginiz degerini giriniz..?");
//                 scanf("%d",&data);
//                 head=delete(head,data);
//                 break;

//             case 5:
//                 head=destroy_recursive(head);
//                 break;

//             case 6:
//                 printf("Listede %d eleman vardir\n",count(head));
//                 break;

//             case 7:
//                 listinfo(head);
//                 break;

//             case 8:
//                 exit(1);
//                 break;
//             default:
//                 printf("Yanlis secim\n");
//         }
//     }
// }

//-------------------------------------------------------------------------Tek Bagli Listeler Dairesel-------------------------------------------------------------------------------//

// void insertFront(int key) //listenin basina eleman ekleme
// {
//     if(head == NULL)
//     {
//         head = (struct node *)malloc(sizeof(struct node));
//         head -> data = key;
//         head -> next = head;
//     }
//     else
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         struct node *last = head;
//         temp -> data = key;
//         while(last -> next != head)
//             last = last -> next;
//         temp -> next = head;
//         last -> next = temp;
//     }
// }

// void insertAtlast(int key) //listenin sonuna eleman ekleme
// {
//     if(head == NULL)
//     {
//         head = (struct node *)malloc(sizeof(struct node));
//         head -> data = key;
//         head -> next = head;
//     }
//     else
//     {
//         struct node *last = head;
//         while(last -> naxt != NULL)
//             last = last -> next;
//         last -> next = (struct node *)malloc(sizeof(struct node))
//         last -> next -> next = head;
//         last -> next -> data = key;
//     }
// }

// void concatente(struct node *list_1, struct node *list_2)
// {
//     if(list_1 == NULL)
//         list_1 = list_2;
//     else
//     {
//         struct node *last = list_1;
//         while (last -> next != list_1)
//             last = last -> next;
//         last -> next = list_2;
//         last = list_2;
//         while (last -> next != list_2)
//             last = last -> next;
//         last -> next = list_2;
//     }
// }

// struct node *locate(int veri, struct node *head)
// {
//     struct node *locate = NULL;
//     struct node *temp = head;
//     do
//     {
//         if(head -> data != veri)
//             head = head -> next;
//         else
//         {
//             locate = head;
//             break;
//         }
//         while(head != temp)
//             return locate;
//     }
// }

//-------------------------------------------------------------------------cift bagli dogrusal-------------------------------------------------------------------------------//

// void insertAtFirst(int key)
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
//         head -> prev = prev;
//         head = temp;
//     }
// }

// void insertAtEnd(int key)
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
//         struct node *temp = head;
//         struct node *temp2 = (struct node *)malloc(sizeof(struct node));
//         while(temp -> next != NULL)
//             temp = temp -> next;
//         temp2 -> data = key;    
//         temp2 -> next = NULL;
//         temp2 -> prev = temp;
//         temp -> next = temp2;
//     }
// }

// void addthen(node *other_node, node *list, int n)
// {
//     node *temp = head;
//     int i = 1;
//     while(i < n)
//     {
//         head = head -> next;
//         i++;
//     }
//     other_node -> prev = head;
//     other_node -> next = head -> next;
//     head -> next = other_node;
//     head = temp;
// }
