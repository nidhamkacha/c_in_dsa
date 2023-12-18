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
if (f==r)
{
    f = -1;
    r = -1;
}
if (f == -1 && r == -1)
{
    printf("Queue is Empty");
}
f++;


}
int main()
{
     int choice, value;

    while (1) {
        printf("\n1. Display\n2. Insert Value\n3. Delete Value\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display();
                break;
            case 2:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertend(value);
                break;
            case 3:
                deletefirst();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}