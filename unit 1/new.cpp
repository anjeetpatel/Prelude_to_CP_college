#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

// Function to print the list in reverse order
void print_reverse(node *first)
{
    if (first == NULL)
        return;

    print_reverse(first->next);
    cout << first->data << " ";
}

// Function to print the list
void print_list(struct node *first)
{
    if (first == NULL)
        return;
    node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Function to remove the first element (pop)
struct node *pop(struct node *first)
{
    if (first == NULL)
        return NULL;
    node *temp = first;
    first = first->next;

    delete temp;
    return first;
}

// Function to add an element to the front (push)
struct node *push(struct node *first, int key)
{
    node *temp = new node;
    temp->data = key;
    temp->next = first;
    return temp;
}

// Function to get the top element
int top(struct node *first)
{
    if (first == NULL)
        return -1;

    return first->data;
}

int main()
{
    node *first = NULL;
    first = push(first, 2);
    first = push(first, 3);
    first = push(first, 4);
    first = push(first, 5);
    first = push(first, 6);
    first = push(first, 7);
    first = push(first, 8);

    first = pop(first);
    first = pop(first);
    first = pop(first);

    cout << "Top element: " << top(first) << endl;
    cout << "List in order: ";
    print_list(first);
    cout << endl;
    cout << "List in reverse order: ";
    print_reverse(first);
    cout << endl;

    return 0;
}
