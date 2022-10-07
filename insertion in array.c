#include<stdio.h>
int main()
{
    int a[40],size,i,num,pos;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position u want to insert:");
    scanf("%d",&pos);
    printf("Enter the number in postion:");
    scanf("%d",&num);
    for(i=size-1;i<pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=num;
    printf("The final array after insertion is:");
    for(i=0;i<size;i++)
    printf("%d\n",a[i]);
}
