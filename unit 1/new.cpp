10 : 30 AM
        emoji -
    icon
        three -
    dots - icon
#include <iostream>
    using namespace std;

struct node
{
    int data;
    struct node next;
};

void print_reverse(node first)
{
    if (first == NULL)
        return;

    print_reverse(first->next);
    cout << first->data << " ";
}

void print_list(struct node *first)
{
    if (first == NULL)
        return;
    node temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

struct node pop(struct node *first)
{
    if (first == NULL)
        return NULL;
    node temp = first;
    first = first->next;

    delete temp;
    return first;
}

struct node push(struct node *first, int key)
{
    node temp = new node;
    temp->data = key;
    temp->next = NULL;
    if (first == NULL)
        return temp;
    temp->next = first;

    return temp;
}

int top(struct node first)
{
    if (first == NULL)
        return -1;

    return first->data;
}

main()
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

    cout << top(first);
}