#include <stdio.h>
#define MAX_SIZE 6

int arr[MAX_SIZE];
int f = -1, r = -1;

int isFull() {
    return (f == 0 && r == MAX_SIZE - 1) || (f == r + 1);
}

int isEmpty() {
    return f == -1;
}

void insertRear(int ele) {
    if (isFull()) {
        printf("Queue Is Full\n");
        return;
    }

    if (f == -1) {
        f = 0;
        r = 0;
    } else if (r == MAX_SIZE - 1) {
        r = 0;
    } else {
        r++;
    }

    arr[r] = ele;
}

void insertFront(int ele) {
    if (isFull()) {
        printf("Queue Is Full\n");
        return;
    }

    if (f == -1) {
        f = 0;
        r = 0;
    } else if (f == 0) {
        f = MAX_SIZE - 1;
    } else {
        f--;
    }

    arr[f] = ele;
}

void deleteFront() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    if (f == r) {
        f = -1;
        r = -1;
    } else if (f == MAX_SIZE - 1) {
        f = 0;
    } else {
        f++;
    }
}

void deleteRear() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    if (f == r) {
        f = -1;
        r = -1;
    } else if (r == 0) {
        r = MAX_SIZE - 1;
    } else {
        r--;
    }
}
int insertcircular(int ele)
{
     if (isFull()) {
        printf("Queue Is Full\n");
        return 0;
     }
     else
     {
       if (f == -1)
	    f = 0;

       r = (r + 1) % MAX_SIZE;
       arr[r] = ele;
    //    printf ("%d was enqueued to circular queue\n", value);
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return;
    }

    int i = f;
    printf("Queue elements: ");
    do {
        printf("%d ", arr[i]);
        if (i == r)
            break;
        i = (i + 1) % MAX_SIZE;
    } while (i != f);
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Display\n2. Insert at Rear\n3. Delete from Front\n4. Insert at Front\n5. Delete from Rear\n6. insert in circular\n7. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display();
                break;
            case 2:
                printf("Enter value to insert at the rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                printf("Enter value to insert at the front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 5:
                deleteRear();
                break;
            case 6:
                printf("Enter value to insert at the front: ");
                scanf("%d", &value);
                insertcircular(value);
                break;
            case 7:
            printf("You Are Exited !");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
