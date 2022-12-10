//    manush .. circular linked list

#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
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

void insertNode(Node *&tail, int element, int d)
{
    // emptylist...
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        // non - empty list
        //  assuming that node is present in link list..

        Node *curr = tail;
        // searching the element..
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found curr-> represnet the element wla node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << " node is empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void delteNode(Node *&tail, int value)
{

    // case 1 if list is empty
    if (tail == NULL)
    {
        cout << " list is empty, pklease check again " << endl;
        return;
    }
    else
    {

        // case 2 non empty
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        // prev->next = curr->next;

        // 1 node
        if (curr == prev)
        {
            tail == NULL;
        }
        // 2 node
        else if (tail == curr)
        {
            tail == prev;
        }
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

bool isCircularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;

    // dhond rha hai ye ..
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    // milgya..
    if (temp == head)
    {
        return true;
    }
    // nahi mila
    return false;
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
    Node *tail = NULL;
    //  print(tail);
    insertNode(tail, 0, 10);
    // print(tail);
    insertNode(tail, 10, 20);
    // print(tail);
    insertNode(tail, 20, 25);
    // print(tail);
    insertNode(tail, 25, 30);
    // print(tail);
    insertNode(tail, 30, 40);
    // print(tail);

    tail->next = head->next;

    cout << " data of tail =  " << tail->data << endl;
    cout << " data of head = " << head->data << endl;

    if (detectLoop(head))
    {
        cout << "Loop is present " << endl;
    }
    else
    {
        cout << "Loop is not present " << endl;
    }

    /*
        if (isCircularList(tail))
        {
            cout << "linked list is circular in nature ";
        }
        else
        {
            cout << "linked list is not circular";
        }
    */
    /* insertNode(tail, 20, 30);
     print(tail);
     insertNode(tail, 30, 40);
     print(tail);
     insertNode(tail, 30, 35);
     print(tail);

    //  delteNode(tail, 20);
    // print(tail);
    // manush.....
    // single node delete krte hai na to error nahi ata but jo print function me jo print krana hai vo nahi hota ...garbage value ata hai...
    // delteNode(tail, 5);
    // print(tail);

    // delete 10
    //  delteNode(tail, 10);
    // print(tail);
   */

    return 0;
}
