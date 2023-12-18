#include <stdio.h>
#include <stdlib.h>
int a[10]= {22,5,66,54,12,32,77,99,74,2};

int selectionsort()
{
    int temp;
    for (int i = 0; i < 10; i++) 
    {
        for (int j = i+1; j < 10 ; j++)
        {
            if (a[i]>a[j])
            {
               temp = a[i];
               
               a[i]= a[j];
               a[j] = temp;
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
selectionsort();
printf("\n");
for (int i=0; i < 10; i++)
{
        printf(" %d",a[i]);
}
return 0;
}