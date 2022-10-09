#include<stdio.h>
int main()
{
    int a[50]={1,2,3,4,5,6};
    int i,size=6,pos,num;
    /*traversing*/
    printf("the elements in array are:");
    for(i=0;i<6;i++){
        printf("%d",a[i]);
    }
    /*insertion*/
    printf("\nEnter the position  u want to insert:");
    scanf("%d",&pos);
    printf("Enter the number u want to insert:");
    scanf("%d",&num);
    for(i=size-1;i>pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=num;
    printf("after insertion final array is:");
    for(i=0;i<6;i++)
    printf("%d",a[i]);
    /*Deletion*/
    printf("\nEnter the position u want to delete:");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++)
    a[i]=a[i+1];
    size--;
    printf("\nfinal array after deletion:");
    for(i=0;i<size;i++)
    printf("%d",a[i]);


}
