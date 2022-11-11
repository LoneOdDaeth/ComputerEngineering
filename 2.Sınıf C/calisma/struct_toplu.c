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
    struct node *temp1 = head;
    while (temp1 -> next != NULL)
        temp1 = temp1 -> next;
    temp1 -> next = temp;
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
    if(head == NULL)
        printf("Listede eleman yok");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp -> data);
        temp = temp -> next;
    }
}

void listinfo(struct node *head)
{
    int counter = 1;
    while (head != NULL)
    {
        printf("%dDugumun adresi= %p", counter, head);
        printf("%dDugumun verisi= %p", counter, head -> data);
        printf("%dDugumun bagli oldugu dugumun adresi= %p", counter, head -> next);
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
        free(temp);
    }
    return head;
}

struct node *delete(struct node *head, int key)
{
    if(head == NULL) //listenin bos olma durumu
        printf("Liste bos");
    struct node *temp = head;
    if(head -> data == key) //listede sadece istenilen elemanın olma ihtimali
    {
        head = head -> next;
        free(temp);
    }
    else if(head -> next == NULL) //listede tek elamanın olma durumu
    {
        printf("Listede istediginiz eleman yok");
        return head;
    }
    else //listedebirden fazla eleman bulunması ve istegimiz elemanı arama alanı
    {
        while (temp -> next -> data != key)
        if(temp -> next -> next == NULL) //Listede birden fazla elaman bulunması ve istenilen elemaın bulunmaması durumu
        {
            printf("İstediginiz eleman bulunmamaktadır");
            return head;
        }
        struct node *temp1 = temp -> next; //if kosulu da islemediğinde istediğimiz elemana ulaştık demektir
        temp -> next = temp -> next -> next; //burda tempin listenin sonunu göstermesini sağlıyoruz
        free(temp1);
    }
    return head;
}


int main()
{
    int secim,data;
    struct node *head = NULL;
    while(1){
    printf("1-Listenin Basina Eleman Ekle\n");
    printf("2-Listenin Sonuna Eleman Ekle\n");
    printf("3-Listeyi Gorme\n");
    printf("4-Listeden verilen bir degere sahip dugum silmek\n");
    printf("5-Listeyi sil\n");
    printf("6-Listedeki eleman sayisi\n");
    printf("7-Listenin tum eleman bilgileri\n");
    printf("8-Programdan Cikma\n");
    printf("Seciminiz....?");
    scanf("%d",&secim);

    switch(secim){

        case 1: 
            printf("Eklemek istediginiz degerini giriniz..?");
            scanf("%d",&data);
            head=addhead(head,data);
            break;
        
        case 2:
            printf("Eklemek istediginiz degerini giriniz..?");
            scanf("%d",&data);
            head=addlast(head,data);
            break;
        
        case 3:
            print(head);
            break;
        
        case 4:
            printf("Silmek istediginiz degerini giriniz..?");
            scanf("%d",&data);
            head=delete(head,data);
            break;  
        
        case 5:
            head=destroy(head);
            break;
        
        case 6:
            printf("Listede %d eleman vardir\n",count(head));
            break;
        
        case 7:
            listinfo(head);
            break;
        
        case 8:
            exit(1);
            break;
            default:
            printf("Yanlis secim\n");
       }
    }
}