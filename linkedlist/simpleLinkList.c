#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

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
    return;
}
void deleteEnd()
{
    struct node *ptr = head , *p;
    if(head == NULL)
    {
        printf("List Is Already Empty");
    }
    else if(head->next == NULL)
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
void deleteFront()
{
    struct node *temp = malloc(sizeof(struct node)); 
    if (head == NULL)
    {
        printf("LinkList Is Empty ");
        return;
    }
    
    head = head->next;
    free(temp);
    
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
  insertEnd(100);
  insertEnd(200);
  insertEnd(300);
  insertEnd(400);
  insertEnd(500);
  insertEnd(600);
  display();
  deleteEnd();
  display();
  deleteFront();
  display();
  return 0;
}
