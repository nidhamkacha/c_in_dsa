#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = head;
    }
    return;
}

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("list is alredey empty....");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    temp->next = head;
    head = temp;
    ptr->next = head;
}

void deletefirst()
{
    if (head == NULL)
    {
        printf("list n");
        return;
    }
    struct node *p = head;
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    if (ptr == head)
    {
        head == NULL;
    }
    else
    {
        head = head->next;
        ptr->next = head;
    }

    free(p);
}

void insertmid(int position,int val)
{
    struct node *ptr = head, *p;
    struct node *temp = malloc(sizeof(struct node));
    int i = 0;

    temp->data = val;

    while (i < position)
    {
        i++;
        p = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr;
    p->next = temp;
    return;
}

void deletemid(int position)
{
    struct node *ptr = head;
    struct node *prev, *p;

    while (ptr->data != position)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else
    {
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
    }
    printf("\n");
}

int main()
{
   insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    insertend(500);
    insertend(600);
    insertend(700);
    insertend(800);
    printf("InsertEnd Position.\n");
    display();
    deleteEnd();
    deleteEnd();
    deleteEnd();
    deleteEnd();
    printf("DeleteEnd Position.\n");
    display();

    insertfirst(500);
    insertfirst(600);
    insertfirst(700);
    insertfirst(800);
    printf("InsertFirst Position.\n");
    display();
    deletefirst();
    deletefirst();
    deletefirst();
    printf("DeleteFirst Position.\n");
    display();

    insertmid(300, 900);
    printf("InsertMid Position.\n");
    display();

    deletemid(300);
    printf("DeleteMid Position.\n");
    display();
}