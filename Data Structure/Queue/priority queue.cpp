#include <stdio.h>
#define MAX 5

void add();
void dlt();
void check(int);
void display();
int pqueue[MAX], front = -1, rear = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("1 --> Insert\n2 --> Delete\n3 --> Display\n4 --> Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            dlt();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Choice is incorrect, Enter a correct choice\n");
        }
    }
}
//Insert
void add()
{
    if (rear >= MAX - 1)
        printf("\nQueue is full\n");

    else
    {
        int num;
        printf("\nEnter value to be inserted: ");
        scanf("%d",&num);

        if ((front == -1) && (rear == -1))
        {
            front++;
            rear++;
            pqueue[rear] = num;
        }
        else
        {
            check(num);
            rear++;
        }
    }
}
//Check
void check(int num)
{
    int i,j;

    for (i=0; i<=rear; i++)
    {
        if (num < pqueue[i])
        {
            for (j=rear+1; j>i; j--)
            {
                pqueue[j] = pqueue[j-1];
            }
            pqueue[i] = num;
            break;
        }
    }
    pqueue[i] = num;
}
//Delete
void dlt()
{
    int i, num;

    if ((front==-1) && (rear==-1))
    {
        printf("\nQueue is empty no elements to delete\n");
        return;
    }

    printf("\nEnter value to delete: ");
            scanf("%d",&num);

    for(i=0; i<=rear; i++)
    {
        if (num == pqueue[i])
        {
            for( ; i<rear; i++)
            {
                pqueue[i] = pqueue[i + 1];
            }
        rear--;

        if (rear == -1)
            front = -1;
        break;
        }

        else
            printf("\nThe Number is not found\n");
    }
}

//Display
void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty\n");
        return;
    }

    printf("\n");
    for (front=0 ; front<=rear; front++)
    {
        printf("%d ", pqueue[front]);
    }
    printf("\n");
    front = 0;
}
