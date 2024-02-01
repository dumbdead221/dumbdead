#include<stdio.h>
void main()
{
    int n,i,item;
    int a[100];
    int beg=0,end,mid;
    printf("enter searching item");
    scanf("%d",&item);
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("sorted array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
 end=n-1;
    while(beg<=end)
    {

        mid=(beg+end)/2;
        if(a[mid]==item)
        {
            printf("element is found");
       break; }
       else if(a[mid]<item)
       {
           beg=mid+1;
       }
       else if(a[mid]>item)
       {
           end=mid-1;
       }

    }
    if(a[mid]!=item)
    {
        printf("element not found");
    }
}
