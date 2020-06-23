/* https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1 */

// Iterative
int getCount(struct Node *head)
{

    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

//Recursive
int getCount(struct Node* head){
    if(head==NULL)
        return 0;
    return 1 + getCount(head->next);
}
