#include <stdio.h>
#include <stdlib.h>

void linearsearch(int arr[], int val) {
    int found = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == val) {
            printf("%d Exists \n", val);
            found = 1;
            break; 
        }
    }
    if (found == 0) {
        printf("%d Not Exist \n", val);
    }
}

int main() {
    
    // 1. int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; Static Array

    // 2.using random Function 
    int a[10];
    for(int  i = 0; i < 10; i++) 
    {
        a[i] = rand()%50+1;
    }

    //  3. User Input Array
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter Element At %d ",i+1);
    //     scanf("%d",&a[i]);
    // }
    
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    int no;
    printf("\nEnter the value you want to search: ");
    scanf("%d", &no);
    linearsearch(a, no);

    return 0;
}