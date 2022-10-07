#include<stdio.h>
int main()
{
    int a[50],i,size,pos,item;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements in array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the postion u want delete data:");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    printf("Invalide position");

    else
    {
        item=a[pos-1];
        for(i=pos-1;i<size-1;i++)
            a[i]=a[i+1];
    }
    size--;
    printf("final array after deletion is:");
    for(i=0;i<size;i++)
        printf("%d\n",a[i]);
}

