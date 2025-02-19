#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
}
*new,*head=NULL,*temp,*tail=NULL;
void traverse()
{
if (head == NULL)
printf("\nList is empty\n");
else {
temp = head;
while (temp != NULL)
{
printf("Data = %d\n",
temp->data);
temp = temp->next;
}
}
}
void insertAtFront()
{
int value;
printf("Enter the data\n");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data = value;
new->next = head;
head = new;
}
void insertAtEnd()
{
int value;
printf("Enter the data\n");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;
new->next=NULL;
temp=head;
if (temp == NULL) {
head = new;
return;
}
while (temp->next!=NULL) 
{
temp= temp->next;
}
temp->next=new;
}
void insertAtPosition()
{
int i,pos,value;
printf("Enter the data\n");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data = value;
printf("Enter position\n");
scanf("%d",&pos);
temp = head;
if (pos == 1) {
new->next = head;
head = new;
return;
}
for(i=2; i < pos; i++) 
{
if(temp->next != NULL) {
temp = temp->next;
}
}
new->next = temp->next;
temp->next = new;
}
void deleteFirst()
{
if (head == NULL)
printf("\nList is empty\n");
else {
temp = head;
head = head->next;
free(temp);
}
}
void main()
{
int choice;
while (1)
