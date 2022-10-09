#include<stdio.h>
int main()
{
    int a[50]={1,2,3,4,5,6};
    int i,size=6,l=0,mid,data=6,r=size-1;
    while(l<=r){
        mid=(l+r)/2;
        if(data==a[mid]){
        printf("the data is found at position %d",a[mid]);
        break;}
        else if(data<a[mid]){
        r=mid-1;}
        else{
            l=mid+1;
        }

    }
}
