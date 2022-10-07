#include<stdio.h>
int main()
{
    int a[40],size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements in array:");
    for(i=0;i<size;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("the elements  in array are:");
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;


}
