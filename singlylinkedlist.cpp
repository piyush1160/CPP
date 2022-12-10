#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	// constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	// descrutor..
	~Node()
	{
		int value = this->data;
		// memory free
		if (this->next != NULL)
		{
			delete next;
			this->next = NULL;
		}
		cout << " memory free for node with data " << value << endl;
	}
};

void insertAtTail(Node *&tail, int d)
{
	Node *temp = new Node(d);
	tail->next = temp;
	tail = temp;
}

void insertAtHead(Node *&head, int d)
{ // new node create
	Node *temp = new Node(d);
	temp->next = head;
	head = temp;
}

void print(Node *&head)
{
	Node *temp = head;

	while (temp != NULL)
	{
		cout << " " << temp->data;
		temp = temp->next;
	}
	cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
	Node *temp = head;
	int count = 1;

	// insert at start..

	if (pos == 1)
	{
		insertAtHead(head, d);
		return;
	}

	while (count < pos - 1)
	{
		temp = temp->next;
		count++;
	}

	// insert at tail/end..
	if (temp->next == NULL)
	{
		insertAtTail(tail, d);
		return;
	}

	// new node create kri jo insert krni thi ..
	Node *nodeToinsert = new Node(d);
	nodeToinsert->next = temp->next;
	temp->next = nodeToinsert;
}

void deleteNode(int pos, Node *&head)

{
	// delete from begining /start
	if (pos == 1)
	{
		Node *temp = head;
		head = head->next;
		// memory free start node ki
		temp->next = NULL;
		delete temp;
	}
	else
	{
		// delete from middle and from last..
		Node *curr = head;
		Node *prev = NULL;

		int count = 1;
		while (count < pos)
		{
			prev = curr;
			curr = curr->next;
			count++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}

bool detectLoop(Node *head)
{
	if (head == NULL)
	{
		return false;
	}
	map<Node *, bool> visited;

	Node *temp = head;

	while (temp != NULL)
	{
		if (visited[temp] == true)
		{
			cout << "Present on  element " << temp->data << endl;
			return true;
		}

		visited[temp] = true;
		temp = temp->next;
	}
	return false;
}

int main()
{
	Node *node1 = new Node(10);
	// cout<<node1->data<<endl;
	// cout<<node1->next<<endl;

	// head pointed to new node;
	// tail pointed to new node;
	Node *head = node1;
	Node *tail = node1;
	print(head);
	/*
	 insertAtHead(head,20);
	 print(head);
	  insertAtHead(head,30);
	 print(head);
	 */
	insertAtTail(tail, 20);
	print(head);
	insertAtTail(tail, 30);
	print(head);

	// insertAtPosition(tail,head,4,35);
	insertAtPosition(tail, head, 4, 35);
	print(head);

	tail->next = head->next;
	cout << "head " << head->data << endl;
	cout << " tail " << tail->data << endl;

	if (detectLoop(head))
	{
		cout << "Loop is present " << endl;
	}
	else
	{
		cout << "Loop is not present " << endl;
	}

	// deleteNode(3, head);
	// print(head);

	return 0;
}