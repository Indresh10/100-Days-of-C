#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *insert(struct ListNode *list, int val)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    if (*list == NULL)
    {
        *list = newNode;
    }
    else
    {
        struct ListNode *temp = *list;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return list;
}
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = NULL;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {
            head = insert(head, list1->val);
            list1 = list1->next;
        }
        else
        {
            head = insert(head, list2->val);
            list2 = list2->next;
        }
    }

    while (list1 != NULL)
    {
        head = insert(head, list1->val);
        list1 = list1->next;
    }

    while (list2 != NULL)
    {
        head = insert(head, list2->val);
        list2 = list2->next;
    }
    return head;
}
void display(struct ListNode *list)
{
    struct ListNode *temp = list;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    struct ListNode *list1 = NULL;
    list1 = insert(list1, 1);
    list1 = insert(list1, 2);
    list1 = insert(list1, 3);
    struct ListNode *list2 = NULL;
    list2 = insert(list2, 2);
    list2 = insert(list2, 3);
    list2 = insert(list2, 4);
    struct ListNode *head = mergeTwoLists(list1, list2);
    display(list1);
    return 0;
}
