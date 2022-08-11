#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node* next;

	Node(int val)
	{
		this->value = val;
		this->next = NULL;
	}
};

void display(Node* n)
{
    while(n!=NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
    cout << endl;
}

void displayReverse(Node* n)
{
    if(n==NULL)
    {
        return;
    }
    displayReverse(n->next);
    cout << n->value << " ";

}

void insertAtTail(Node* &head, int val)
{
    Node *newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtHead(Node* &head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main()
{
	Node *head = NULL;
	int ch, val;
	while(1)
    {
        cout << "1 -> insert at tail.\n2 -> insert at head.\n3 -> display linked list.\n4 -> display linked list reverse.\n5 -> break.\n";
        cout << "Enter Choice: ";
        cin >> ch;
        if(ch==1)
        {
            cout << "Enter the value: ";
            cin >> val;
            insertAtTail(head, val);
            cout << endl;
        }
        else if(ch==2)
        {
            cout << "Enter the value: ";
            cin >> val;
            insertAtHead(head, val);
            cout << endl;
        }
        else if(ch==3)
        {
            cout << "Linked list elements are: ";
            display(head);
            cout << endl;
        }
        else if(ch==4)
        {
            cout << "Linked list elements in reversed order are: ";
            displayReverse(head);
            cout << endl << endl;
        }
        else
        {
            break;
        }
    }
	return 0;
}

