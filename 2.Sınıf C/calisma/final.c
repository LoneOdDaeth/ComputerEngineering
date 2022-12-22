//-------------------------------------------------------------------------Kuyruklar (Queues)-------------------------------------------------------------------------------//

// #include <stdio.h> 
// #include <string.h>  
// #include <stdlib.h> 
// #include <conio.h> 
// #include <ctype.h> 
// #include <stdbool.h>

// #define SIZE 100  
// #define STACK_SIZE 100  
// #define QUEUE_SIZE 100  

// struct node {  
//     int data;  
//     struct node * next;  
// };

// typedef struct {  
//     struct node *top;  
//     int cnt;  
// }stack;  

// typedef struct {  
//     int cnt;  
//     struct node *front;  
//     struct node *rear;  
// }queue;

// void initialize_stack(stack *stk) {  
//     stk -> top = NULL;  
//     stk -> cnt = 0;  
// }

// void initialize_queue(queue *q) {  
//     q -> cnt = 0;   
//     q -> front = q -> rear = NULL;  
// } 

// bool isEmpty_stack(stack *stk) {  
//     return(stk -> cnt == 0);  
// }  

// bool isFull_stack(stack *stk) {  
//     return(stk -> cnt == STACK_SIZE);  
// }

// void push(stack *stk, int c) {  
//     if(!isFull_stack(stk)) {  
//         struct node *temp = (struct node *)malloc(sizeof(struct node));  
//         temp -> data = c;  
//         temp -> next = stk -> top;  
//         stk -> top = temp;  
//         stk -> cnt++;  
//     } 
//     else  
//         printf("Stack dolu\n");  
// }  
// int pop(stack *stk) {  
//     if(!isEmpty_stack(stk)) {  
//         struct node *temp = stk -> top;  
//         stk -> top = stk -> top -> next;  
//         int x = temp -> data;  
//         free(temp);  
//         stk -> cnt--;  
//         return x;  
//     }  
// }

// int isEmpty_queue(queue *q) {  
//     return(q -> cnt == 0);  
// }  

// int isFull_queue(queue *q) {  
//     return(q -> cnt == QUEUE_SIZE);  
// }  

// void enqueue(queue *q, int x) {  
//     if(!isFull_queue(q)) {  
//         struct node *temp = (struct node *)malloc(sizeof(struct node));  
//         temp -> next = NULL;  
//         temp -> data = x;  
//         if(isEmpty_queue(q))  
//             q -> front = q -> rear = temp;  
//     else
//         q -> rear = q -> rear -> next = temp;  
//     q -> cnt ++;  
//     }  
// }

// int dequeue(queue *q) {  
//     if(!isEmpty_queue(q)) {  
//         struct node *temp = q -> front;  
//         int x = temp -> data;  
//         q -> front = temp -> next;  
//         free(temp);  
//         q -> cnt--;  
//         return x;  
//     }  
// }

// int main() {  
//     char ifade[SIZE];  
//     queue q;  
//     stack s;  
//     int i = 0, mismatches = 0;  
//     initialize_stack(&s);  
//     initialize_queue(&q);  
//     printf("Bir ifade giriniz...\n");  
//     gets(ifade);  
//     for(i = 0; i != strlen(ifade); i++) {  
//         if(isalpha(ifade[i])) {  
//             enqueue(&q, tolower(ifade[i]));  
//             push(&s, tolower(ifade[i]));  
//         }  
//     }  
//     while(!isEmpty_queue(&q)) {  
//         if(pop(&s) != dequeue(&q)) {  
//         mismatches = 1;  
//         break;  
//         }  
//     }  
//     if(mismatches == 1)  
//         printf("Girdiginiz ifade palindrom degildir!\n");  
//     else  
//         printf("Girdiginiz ifade bir palindromdur!\n");  
// }

//------------------------------------------------------------------------- AĞAÇLAR(Trees) -------------------------------------------------------------------------------//

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// struct node { 
// 	int data; 
// 	struct node *left; 
// 	struct node *right; 
// }; 
// typedef struct node BTREE; 
// BTREE *new_node(int data) { 
// 	BTREE *p = (BTREE*) malloc(sizeof(BTREE)); 
// 	p -> data = data; 
// 	p -> left = NULL; 
// 	p -> right = NULL; 
// 	return p; 
// } 
// BTREE *insert(BTREE *root, int data) { // root'u verilmiş ağaca ekleme yapılacak 
// 	if(root != NULL) { 
// 		if(data < root -> data) 
// 			root -> left = insert(root -> left, data); 
// 		else 
// 			root -> right = insert(root -> right, data); 
// 	}
// 	else 
// 		root = new_node(data); 
// 	return root; 
// } 
// void preorder(BTREE *root) { 
// 	if(root != NULL) { 
// 		printf("%3d ", root -> data); 
// 		preorder(root -> left); 
// 		preorder(root -> right); 
// 	} 
// } 
// void inorder(BTREE *root) { 
// 	if(root != NULL) { 
// 		inorder(root -> left); 
// 		printf("%3d ", root -> data); 
// 		inorder(root -> right); 
// 	}
// } 
// void postorder(BTREE *root) { 
// 	if(root != NULL) { 
// 		postorder(root -> left); 
// 		postorder(root -> right); 
// 		printf("%3d ", root -> data); 
// 	} 
// } 
// int main() { 
// 	BTREE *myroot = NULL; 
// 	int i = 0; 
// 	do { 
// 		printf("\n\nAgaca veri eklemek icin sayi giriniz...\nSayi = "); 
// 		scanf("%d", &i); 
// 		if(i != -1) 
// 			myroot = insert(myroot, i); 
// 		} while(i != -1); 
// 	preorder(myroot); 
// 	printf("\n"); 
// 	inorder(myroot); 
// 	printf("\n"); 
// 	postorder(myroot); 
// 	getch(); 
// 	return 0; 
// }
