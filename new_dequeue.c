#include <stdio.h>
int arr[6];
int no = 6;
int f = -1,r = -1;

int insertend(int ele)
{
  if (r == no-1)
  {
    printf("Queue Is Full");
    return 0;
  }
  if (f == -1 && r == -1)
  {
    f = 0;
    r = 0;
  }
  r++;
  arr[r] = ele;    
}

void display()
{
for (int i = f+1; i <= r; i++)
{
    printf(" %d",arr[i]);
}
printf("\n");
}
int  deletefirst()
{
f++;
if (f==r)
{
    f = -1;
    r = -1;
}
if (f == -1 && r == -1)
{
    printf("Queue is Empty");
}


}
int main()
{
  
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    deletefirst();
    display();
    return 0;
}