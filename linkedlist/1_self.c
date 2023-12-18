#include <stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a,b,c,d;

    a.data = 10;
    a.ch = 'A';
    a.ptr = &b;

    b.data = 20;
    b.ch = 'B';
    b.ptr = &c;

    c.data = 50;
    c.ch = 'N';
    c.ptr = &d;

    d.data = 100;
    d.ch = 'K';
    d.ptr = NULL;

    // printf("A Node = data- %d  ch - %c  \n",a.data,a.ch);
    // printf("B Node = data- %d  ch - %c  ",b.data,b.ch);

    // a.ptr = &b;
    // printf("B Node = data- %d  ch - %c  \n",a.ptr -> data,a.ptr->ch); // it store the data and ch ele of B node from pointer of A

    // b.ptr = &a;
    // printf("A Node = data- %d  ch - %c  \n",b.ptr->data,b.ptr->ch);

    printf("A Node = data- %d  ch - %c  \n",a.data,a.ch);
    printf("B Node = data- %d  ch - %c  \n",a.ptr->data,a.ptr->ch);
    printf("C Node = data- %d  ch - %c  \n",b.ptr->data,b.ptr->ch);
    printf("D Node = data- %d  ch - %c  \n",c.ptr->data,c.ptr->ch);
    
    return 0;
}