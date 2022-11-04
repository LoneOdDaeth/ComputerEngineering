#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addhead(struct node *head,int key) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> next = head; // temp’in next’i şu anda head’i gösteriyor.
    /* Bazen önce listenin boş olup olmadığı kontrol edilir, ama gerekli değil aslında.
    Çünkü boş ise zaten head=NULL olacaktır ve temp olan ilk düğümün next’i NULL gösterecektir. */
    head = temp; /* head artık temp’in adresini tutuyor yani eklenen düğüm listenin başı oldu. */
    return head;
}

struct node *addlast(struct node *head,int key) 
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    /* C++'ta struct node *temp = new node(); * şeklinde kullanılabileceğini unutmayınız. */
    temp -> data = key;
    temp -> next = NULL;
    struct node *temp2 = head;
    /* Aşağıdaki while yapısı traversal(dolaşma) olarak adlandırılır */
    while(temp2 -> next != NULL)
        temp2 = temp2 -> next;
    temp2 -> next = temp;
    return head;
}

void print(struct node *head) 
{
    if(head == NULL) {
        printf("Listede eleman yok\n");
        
    return;
    }
    struct node *temp2 = head;
    while(temp2!= NULL) { // temp2->next!=NULL koşulu olsaydı son düğüm yazılmazdı
        printf("%d\n", temp2 -> data);
        temp2 = temp2 -> next;
    }
}

struct node *delete(struct node *head, int key) 
{
    if(head == NULL) {
        printf("Listede eleman yok\n");
        return;
    }
    struct node *temp = head;
    if(head -> data == key) { // ilk düğüm silinecek mi diye kontrol ediliyor.
    head = head -> next; // head artık bir sonraki eleman.
    free(temp);
    }
    else if(temp -> next == NULL) { // Listede tek düğüm bulunabilir.
        printf("Silmek istediginiz veri bulunmamaktadir.\n\n");
        return head;
    }
    else {
        while(temp -> next -> data != key) 
        {
            if
            (temp -> next -> next == NULL) {
                printf("Silmek istediginiz veri bulunmamaktadir.\n\n");
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

struct node *destroy(struct node *head) 
{
    if(head == NULL) {
        printf("Liste zaten bos\n");
        return;
    }
    struct node *temp2;
    while(head!= NULL) { // while içindeki koşul temp2 -> next, NULL değilse
        temp2=head;
        head = head->next;
        free(temp2);
    }
    return head;
}

int count(struct node *head) 
{
    int counter = 0;
    while(head != NULL) { // head->next!=NULL koşulu olsaydı son düğüm sayılmazdı
        counter++;
        head = head -> next;
    }
    return counter;
}

void listinfo(struct node* head) 
{
    int i = 1;
    while(head != NULL) {
        printf("%d. Dugumunun Adresi = %p \n", i, head);
        printf("%d. Dugumunun verisi = %d \n", i, head -> data);
        printf("%d. Dugumunun Bagli Oldugu Dugumun Adresi= %p\n\n",i, head->next);
        head = head -> next;
        i++;
    }
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