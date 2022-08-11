#include <stdio.h>
#define MAX 5

int stk[MAX];
    int top;

void push(void);
int pop(void);
void display(void);

int main ()
{
    int choice;
    top = -1;

    printf ("STACK OPERATION\n");
    while (1)
    {
        printf("1 --> PUSH\n2 --> POP\n3 --> DISPLAY\n4 --> EXIT\n\n");

        printf ("Enter your choice: ");
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
            return 0;
        }
    }
}

//PUSH

void push ()
{
    int num;
    if (top == (MAX - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        top = top + 1;
        stk[top] = num;
    }
    return;
}

// POP

int pop ()
{
    int num;
    if (top == - 1)
    {
        printf ("Stack is Empty\n");
        return (top);
    }
    else
    {
        num = stk[top];
        printf ("poped element is = %d\n", stk[top]);
        top = top - 1;
    }
    //return (top);
}

// DISPLAY

void display ()
{
    int i;
    if (top == -1)
    {
        printf ("Stack is Empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf ("%d\n", stk[i]);
        }
    }
    printf ("\n");
}
