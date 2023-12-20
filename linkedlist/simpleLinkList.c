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
    // struct node *temp = malloc(sizeof(struct node)); 
    if (head == NULL)
    {
        printf("LinkList Is Empty ");
        return;
    }
    
    head = head->next;
    // free(temp);
    
}
void insertFront(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head = temp;

}
void insertMid(int pos,int val)
{
    struct node *ptr = head ,*p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != pos)
    {
      ptr = ptr->next;
    }
    temp->next = ptr ->next;
    ptr -> next = temp;
    return;
}
void deletemid(int position){
      struct node *ptr = head;
    struct node *prev;

     while(ptr -> data != position){
        prev = ptr;
        ptr = ptr -> next;
    }

    prev -> next = ptr -> next;
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
  insertEnd(100); //insert at the End of the list
  insertEnd(200);
  insertEnd(300);
  insertEnd(400);
  insertEnd(500);
  insertEnd(600);
  display();
  deleteEnd();// delete at the end of list
  display();
  deleteFront();// delete at the start of the list
  display();
  insertFront(20);// insert at the front of the list
  display();
  insertMid(300,90); // insert New NOde After 300
  display();
  deletemid(300);
  display();
  return 0;
}
