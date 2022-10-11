#include<stdio.h>

void main()
{
    int i,j,n,r,temp=0;
    int a[10];

    printf("\nEnter the length of Array (Range 1<n<10) : ");
    scanf("%d",&r);

    printf("\nEnter The Elements of Array...\n");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<r-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nBubble Sorted Array : ");

    for(i=0;i<r;i++)
    {
        printf("     %d\t",a[i]);
    }
    printf("\n");
}