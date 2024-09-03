#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node next;
};

void print_reverse(node first)
{
    if (first == NULL)
        return;

    print_reverse(first->next);
    cout << first->data << " ";
}

void print_queue(struct node *front)
{
    if (front == NULL)
        return;
    node temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void dequeue(node &front, node *&rear)
{
    if (front == NULL)
        return;
    node *temp = front;
    front = front->next;
    delete temp;
}

void enqueue(struct node *&front, struct node *&rear, int key)
{
    node *temp = new node;
    temp->data = key;
    temp->next = NULL;
    if (front == NULL)
    {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = rear->next;
}

int main()
{
    node *front = NULL, *rear = NULL;
    enqueue(front, rear, 2);
    enqueue(front, rear, 3);
    enqueue(front, rear, 4);
    enqueue(front, rear, 5);
    enqueue(front, rear, 6);

    dequeue(front, rear);
    dequeue(front, rear);
    dequeue(front, rear);

    print_queue(front);
}