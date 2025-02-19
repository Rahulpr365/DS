#include <stdio.h> #include <stdlib.h>

struct node { int data; struct node *next; };

struct node *newNode, *head = NULL, *temp;

void traverse() { if (head == NULL) printf("\nList is empty\n"); else { temp = head; while (temp != NULL) { printf("Data = %d\n", temp->data); temp = temp->next; } } }

void insertAtFront() { int value; printf("Enter the data\n"); scanf("%d", &value); newNode = (struct node*)malloc(sizeof(struct node)); newNode->data = value; newNode->next = head; head = newNode; }

void insertAtEnd() { int value; printf("Enter the data\n"); scanf("%d", &value); newNode = (struct node*)malloc(sizeof(struct node)); newNode->data = value; newNode->next = NULL;

if (head == NULL) {
    head = newNode;
    return;
}

temp = head;
while (temp->next != NULL) {
    temp = temp->next;
}
temp->next = newNode;

}

void insertAtPosition() { int i, pos, value; printf("Enter the data\n"); scanf("%d", &value); newNode = (struct node*)malloc(sizeof(struct node)); newNode->data = value; printf("Enter position\n"); scanf("%d", &pos);

if (pos == 1) {
    newNode->next = head;
    head = newNode;
    return;
}

temp = head;
for (i = 1; i < pos - 1 && temp != NULL; i++) {
    temp = temp->next;
}

if (temp == NULL) {
    printf("Invalid position!\n");
    free(newNode);
    return;
}

newNode->next = temp->next;
temp->next = newNode;

}

void deleteFirst() { if (head == NULL) printf("\nList is empty\n"); else { temp = head; head = head->next; free(temp); } }

int main() { int choice; while (1) { printf("\n1. Traverse \n2. Insert at front\n3. Insert at end\n4. Insert at position\n5. Delete at first\n6. Exit\n"); printf("Enter Choice: "); scanf("%d", &choice);

switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            exit(0);
        default:
            printf("Incorrect Choice\n");
    }
}
return 0;

}

