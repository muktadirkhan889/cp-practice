/* https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/ */
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    free(temp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = NULL;

    push(&head, 7);

    push(&head, 1);

    push(&head, 3);

    push(&head, 2);

    printList(head);

    cout << "\n";

    deleteNode(&head, 1);
    printList(head);
    return 0;
}
