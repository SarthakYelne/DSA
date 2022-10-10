#include<stdio.h>

void main()
{
    int i,n,a[10],r;

    printf("\nEnter the Length of Array (Range 0<n<10) : ");
    scanf("%d",&r);

    printf("\nEnter %d Elements of the Array...\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }

    printf("\nlinear Search Element : ");
    scanf("%d",&n);

    for(i=0;i<r;i++)
    {
        if(a[i]==n)
        {
            printf("\nThe Element %d is present at location %d...\n",n,i+1);
        }
    }

    if(i>r)
    {
        printf("\nThe Element %d is not present at any location...\n");
    }

}