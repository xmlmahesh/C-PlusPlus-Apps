/*

simple Linked List example
by Mahesh Chandra Sehalli Jagadish

*/

#include   <iostream>
using namespace std;

typedef struct Node
{
	int value;
	struct Node *Next;

} *Link;


Link CreateNode();
Link AddNode(Link link, int value);
void PrintLinkedList(Link head);

int main()
{
	Link head = NULL;

	head = AddNode(head, 5);
	head = AddNode(head, 21);
	head = AddNode(head, 4);
	head = AddNode(head, 6);	
	head = AddNode(head, 17);

	PrintLinkedList(head);
}

Link AddNode(Link head, int value)
{
	Link temp, p;

	temp = CreateNode();
	temp->value = value;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		p = head;

		while (p->Next != NULL)
		{
			p = p->Next;
		}

		p->Next = temp;
	}
	
	return  head;
}

void PrintLinkedList(Link  head)
{
	while (head != NULL)
	{
		cout << head->value << endl;
		head = head->Next;
	}

}

Link CreateNode()
{
	Link temp;
	temp = (Link)malloc(sizeof(Link));
	temp->Next = NULL;

	return  temp;

}

