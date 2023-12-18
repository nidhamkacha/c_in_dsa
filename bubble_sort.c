#include <stdio.h>
#include <stdlib.h>
int a[10]= {22,5,66,54,12,32,77,99,74,2};

int bubblesort()
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 ; j++)
        {
            if (a[j]>a[j+1])
            {
               temp = a[j];
               a[j]= a[j+1];
               a[j+1] = temp;
            }
        }
    }
    
}


int main()
{
 for (int i = 0; i < 10; i++)
{
        printf(" %d",a[i]);
}
bubblesort();
for (int i=0; i < 10; i++)
{
        printf("\n %d",a[i]);
}
return 0;
}