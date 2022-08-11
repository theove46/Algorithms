#include<stdio.h>
#define MAX 5

void enQueue();
void deQueue();
void display();

int items[MAX], front = -1, rear = -1;


int main()
{
    printf("Queue Operations\n");
    while(1)
    {
        printf("1 --> Insert\n2 --> Delete\n3 --> Display\n4 --> Exit\n\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enQueue();
            break;

        case 2:
            deQueue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;
        }
    }
}


void enQueue()
{
    int num;

    if(rear == MAX-1)
        printf("Queue is Full!!\n");
    else
    {
        if(front == -1)
            front = 0;

        rear++;

        printf("Enter the element to be inserted: ");
        scanf("%d", &num);
        printf("\n");
        items[rear] = num;
    }
}


void deQueue()
{
    if(front == -1)
        printf("Queue is Empty!!\n");
    else
    {
        printf("Deleted item is: %d\n", items[front]);
        front++;

        if(front > rear)
            front = rear = -1;
    }
}


void display()
{
    if(rear == -1)
        printf("Queue is Empty!!\n");
    else
    {
        int i;
        printf("Queue elements are:\n");
        for(i=front; i<=rear; i++)
            printf("%d\t",items[i]);
        printf("\n");
    }
}
