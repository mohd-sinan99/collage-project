#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node * head){
    struct node *temp=head;
    if(head==NULL){
        printf("Linked list is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
struct node* insertAtbeginning(struct node *head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("memmory allocation failed!\n");
        return head;
        }
        newnode->data = val;
        newnode->next = head;
        head = newnode;
        return head;
}
struct node* insertAEND(struct node *head,int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL){
        printf("memory allocation failed\n");
        return head;
    }
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL){
        return newnode;
    }
    struct node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node* insertAftrnode(struct node *head,int targetvalue, int val) {
    struct node *temp = head;
    while (temp != NULL && temp->data != targetvalue){
        temp = temp->next;
    }
    if(temp !=NULL && temp->data != targetvalue) {
    temp = temp->next;
    }
    if (temp == NULL) {
        printf("no target value %d found", targetvalue);
        return head;
    }
   struct node *newnode = (struct node* ) malloc(sizeof(struct node));
   if (newnode == NULL) {
    printf("memory allocaion failed\n");
    return head;
   }
   newnode->data = val;
   newnode->next = temp->next;
   temp->next = newnode;
   return head;
}
struct node* deletefrombeginnimg(struct node *head){
    if (head == NULL) {
        printf("list is already empty! nothing to delete.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);

    printf("first node deleted successfully.\n");
    return head;
}
struct node*deleteFromEnd(struct node* head) {
    if (head == NULL) {
        while(temp-> next-> next !=NULL) {
            temp=temp
        }
    }
}
int main(){
    struct node *head=NULL,*newnode,*temp;
    int choice=1;
    while (choice == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL){
            printf("memory allocation failed\n");
            break;
        }

        printf("enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to insert more data? (1 for yes, 0 for no); ");
        scanf("%d", &choice);
    }
    printf("The linked list is: ");
    display(head);
    head=insertAtbeginning(head,5);
    printf("\n the linked lister after inserting 5:\t ");
    display(head);
    printf("\n the linked lister after deleting from the beginning is:");
    display(insertAEND(head, 200));
    printf("\n deletye first node");
    display(deletefrombeginnimg(head));
    return 0;


}
        