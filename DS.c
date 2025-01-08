#include <stdio.h>

int stack[100], choice, n, top, x, i;

void push(void);
void pop(void);
void display(void);

int main()
{
    top = -1;
    printf("Enter the size of stack [maximum = 100]: ");
    scanf("%d", &n);
    printf("\nStack operations using array");
    printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n\n");
    do
    {
        printf("Enter choice 1,2,3,4 : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n\nExit point...");
                break;
            default:
                printf("\n\tPlease Enter a valid choice(1/2/3/4)");
        }
    } while (choice != 4);
    return 0;
}

void push()
{
    if (top >= n - 1)
    {
        printf("\n\tStack is Overflow");
    }
    else
    {
        printf("Enter a value to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top < -1)
    {
        printf("\n\tStack is Underflow");
    }
    else
    {
        printf("\n\tThe popped element is %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        printf("\n\nThe elements in STACK \n\n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
        printf("\n\nPress Next Choice\n");
    }
    else
    {
        printf("\n\nThe STACK is Empty\n\n");
    }
}
