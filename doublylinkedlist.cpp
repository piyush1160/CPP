#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    // destructor...
    ~Node()
    {
        int value = this->data;

        while (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory free for node which contain this data " << value << endl;
    }
};
// traverse..
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // temp ko age bda dnege...
    }
    cout << endl;
}

// getlength...
int getlength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int d)
{

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    Node *temp = head;
    int count = 1;

    // insert at start..

    if (pos == 1)
    {
        insertAtHead(tail, head, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    // new node create kri jo insert krni thi ..
    Node *nodeToinsert = new Node(d);

    nodeToinsert->next = temp->next;

    temp->next->prev = nodeToinsert;

    temp->next = nodeToinsert;

    nodeToinsert->prev = temp;
}

void deleteNode(int pos, Node *&head)

{
    // delete from begining /start
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        // memory free..
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
        curr->prev = NULL;
        prev->next = curr->next; // joki already null ko point kr rha hai
        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    // empty list..
    if (head == NULL)
    {
        return true;
    }
    // dhoond rha hai..
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (head == temp)
    {
        return true;
    }

    return false;
}

int main()
{

    // Node *node1 = new Node(10);

    // Node *head = node1;
    // Node *tail = node1;
    // case 2 when both head and tail null... linked list is empty

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    insertAtHead(tail, head, 20);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;
    insertAtHead(tail, head, 30);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;
    insertAtHead(tail, head, 40);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    insertAtTail(head, tail, 50);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;
    insertAtPosition(tail, head, 3, 105);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    insertAtPosition(tail, head, 7, 110);
    print(head);
    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;
    cout << endl;
    cout << " length of DOUBLY LINKED LIST before delete " << getlength(head) << endl;

    // delete from starting..
    /*
        deleteNode(1, head);
        print(head);
        cout << "head " << head->data << endl;
        cout << " tail " << tail->data << endl;
        cout << endl;
        cout << " length of DOUBLY LINKED LIST after delete " << getlength(head) << endl;

        // delete from middle and last.

        deleteNode(6, head);
        print(head);
        cout << "head " << head->data << endl;
        cout << " tail " << tail->data << endl;
        cout << endl;
        cout << " length of DOUBLY LINKED LIST after delete " << getlength(head) << endl;
    */
    if (isCircularList(tail))
    {
        cout << "LINKED LIST IS CIRCULAR IN NATURE";
    }
    else
    {
        cout << "LINKED LIST IS NOT CIRCULAR ";
    }

    return 0;
}
