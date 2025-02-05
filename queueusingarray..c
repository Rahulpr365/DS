#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

int main() {
    int queue[MAXSIZE], ch = 1, front = -1, rear = -1, i, j = 1;
    
    printf("Queue using Array\n");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");

    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (rear == MAXSIZE - 1) {
                    printf("\nQueue is Full");
                } else {
                    printf("\nEnter no %d => ", j++);
                    rear++;
                    scanf("%d", &queue[rear]);
                }
                break;

            case 2:
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    front++;
                    printf("\nDeleted Element is %d", queue[front]);
                }
                break;

            case 3:
                printf("\nQueue Elements are:\n");
                if (front == rear) {
                    printf("\nQueue is Empty");
                } else {
                    for (i = front + 1; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Wrong Choice: Please see the options");
        }
    }

    return 0;
}
