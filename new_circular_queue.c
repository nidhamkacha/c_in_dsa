#include <stdio.h>
#define no 5

int arr[no];
int f = -1, r = -1;

int isFull() {
    if ((f == 0 && r == no - 1) || (f == r + 1))
        return 1;
    return 0;
}

int isEmpty() {
    if (f == -1 && r == -1)
        return 1;
    return 0;
}

void insert(int ele) {
    if (isFull()) {
        printf("\nCircular Queue is Full! Insertion not possible!!!\n");
    }
     else {
        if (f == -1) f = 0;
        r = (r + 1) % no;
        arr[r] = ele;
    }
}

void delete() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        if (f == r) {
            f = -1;
            r = -1;
        } else {
            f = (f + 1) % no;
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        int i = f;
        printf("Elements in Circular Queue are: ");
        do {
            printf("%d ", arr[i]);
            i = (i + 1) % no;
        } while (i != (r + 1) % no);
        printf("\n");
    }
}

int main() {
    // int choice, value;

    // while (1) {
    //     printf("\n1. Display\n2. Insert \n3. Delete \n4. Exit\nEnter your choice: ");
    //     scanf("%d", &choice);

    //     switch (choice) {
    //         case 1:
    //             display();
    //             break;
    //         case 2:
    //             printf("Enter value to insert at the rear: ");
    //             scanf("%d", &value);
    //             insert(value);
    //             break;
    //         case 3:
    //             delete();
    //             break;
    //         case 4:
    //             printf("You Are Exited!\n");
    //             return 0;
    //         default:
    //             printf("Invalid choice!\n");
    //     }
    // }
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    delete();
    delete();
    display();
    insert(90);
    insert(100);
    display();
    return 0;
}
