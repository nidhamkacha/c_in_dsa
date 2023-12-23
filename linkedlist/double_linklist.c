#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void insertend(int val)
{
  struct node *ptr = head;
  struct node *temp = malloc(sizeof(struct node));
  temp->prev =  NULL;
  temp->data = val;
  temp->next=NULL;  
if (head == NULL)
{
 head = temp;
 return; 
}
while (ptr->next != NULL)
{
  ptr = ptr->next;
}
ptr->next = temp;
temp->prev = ptr; 
return;

}
void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("List Is Already Empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}
void deletefront()
{
    if (head == NULL)
    {
        printf("LinkList Is Empty ");
        return;
    }
    head = head->next;
     if(head != NULL) {
        head->prev = NULL;
    }
}
void insertfirst(int val)
{
 struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
     head->prev = temp;
     head = temp;
}
void insertMid(int pos, int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    while (ptr != NULL && ptr->data != pos)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        printf("Node with given data not found\n");
        free(temp);
        return;
    }

    temp->next = ptr->next;
    temp->prev = ptr;
    if (ptr->next != NULL) {
        ptr->next->prev = temp;
    }
    ptr->next = temp;
}

void deleteMid(int position)
{
    struct node *ptr = head;
    while (ptr != NULL && ptr->data != position)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        printf("Node with given data not found\n");
        return;
    }

    if (ptr->prev != NULL)
    {
        ptr->prev->next = ptr->next;
    }

    if (ptr->next != NULL)
    {
        ptr->next->prev = ptr->prev;
    }

    free(ptr);
    return;
}
void display()
{
struct node *ptr = head;
if (head == NULL)
{
    printf("List Is Empty..");
}
else
{
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
printf("\n");
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    display();
    deleteEnd();
    display();
    deletefront();
    display();
    insertfirst(60);
    display();
    insertMid(60,300);
    display();
    insertend(70);
    insertend(80);
    insertend(90);
    insertend(100);
    deleteMid(70);
    display();
    return 0;
}