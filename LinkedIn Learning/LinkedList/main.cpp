#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};
typedef Node* nodePtr;
void insert(nodePtr& head, int data);


int main()
{
    nodePtr head;
    head = new Node;
    head -> data = 20;
    head -> link = NULL;

    insert (head, 30);
    nodePtr tmp;
    tmp = head;

    while (tmp != NULL)
    {
        cout << tmp -> data << endl;
        tmp = tmp -> link;
    }
}

void insert(nodePtr& head, int data)
{
    nodePtr temp;
    temp = new Node;
    temp -> data = data;
    temp -> link = head;
    head = temp;
}