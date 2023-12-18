#include <stdio.h>

int binarysearch(int a[],int n,int ele)
{
    int low=0,high=n-1,mid;
    while (high >= low) 
    {
       mid = (low+high)/2;
       if (a[mid]==ele)
       {
         return mid;
       }
       else if (a[mid] > ele)
       {
        high = mid -1;
       }
       else
       {
        low = mid +1;
       }
    }
     return -1;  
}
int main()
{
    int arr[] = {5,10,15,20,25,30,35,40,45,50};
    int size =10;
    int find = 1;
    int res = binarysearch(arr,size,find);

    if (res == -1)
    {
        printf("Element %d not found",find);
    }
    else
    {
        printf("element %d found at %d index",find,res);
    }
    
    return 0;
}