#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void PUSH(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    top++;
    stack[top] = x;

    printf("%d pushed into stack.\n", x);
}

void POP()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("%d popped from stack.\n", stack[top]);
    top--;
}

void PEEK()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

void DISPLAY()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements:\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                PUSH(value);
                break;

            case 2:
                POP();
                break;

            case 3:
                PEEK();
                break;

            case 4:
                DISPLAY();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
