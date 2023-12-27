#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *prev;
struct node *next;
};
struct node *insertAtBegin(struct node *head) {
int x;
printf("Enter an element: ");
scanf("%d",&x);
struct node * newNode=( struct node *)malloc(sizeof(struct node));
newNode->prev=NULL;
newNode->data=x;
newNode->next=head;
if(head!=NULL) {
head->prev=newNode;
}
head=newNode;
return head;
}
struct node * Delete (struct node*head) {
if(head==NULL) {
printf("Double Linked List is empty so deletion is not possible\n");
}
else {
printf("The deleted element from DLL : %d\n",head->data);
head=head->next;
if(head!=NULL){
head->prev =NULL;
}
}
return head;
}
void Search(struct node*head) {
int key;
printf("Enter search element: ");
scanf("%d",&key);
struct node * ptr=head;
int c=1,yes=0;
while(ptr!=NULL){
if(ptr->data==key) {
yes=1;
break;
}
c++;
ptr=ptr->next;
}
if(yes){
printf("The given element %d is found at position : %d\n",key,c);
}
else {
printf("The given element %d is not found in the given DLL\n",key);
}
}
void Traverse (struct node * head){
    if(head==NULL){
        printf("Double Linked List is empty\n");
}
else {
printf("The elements in DLL are: ");
struct node*ptr=head;
while(ptr!=NULL){
printf("%d",ptr->data);
if(ptr->next!=NULL) {
printf(" <--> ");
}
ptr=ptr->next;
}
printf(" <--> NULL\n");
}
}
void main() {
int choice;
struct node *head;
while(1){
printf("1.Insert At Begin\n2.Delete at Begin\n3.Search an elementPosition\n4.Traverse the List\n5.Exit\n");
printf("Enter your option : ");
scanf("%d",&choice);
switch(choice) {
case 1 : head=insertAtBegin(head);
 break;
case 2 : head=Delete(head);
 break;
case 3 : Search(head);
 break;
case 4 : Traverse(head);
 break;
case 5 : exit(0);
default : break;
}
 }
 }
    
