#include<stdio.h>

void main()
{
    int mid,ub,lb=0,r,i,n,a[10];

    printf("\nEnter the Length of Array (Range 0<n<10) : ");
    scanf("%d",&r);

    printf("\nEnter %d Elements of Array...\n",r);
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nBinary Search Element : ");
    scanf("%d",&n);

    ub = r - 1;

    while(lb<=ub)
    {
        mid = (lb+ub)/2;

        if(a[mid]==n)
        {
            printf("\nThe Element %d is present at location %d...\n",n,mid+1);
            break;
        }

        else if(a[mid]>r)
        {
            ub = mid - 1;
        }

        else
        {
            lb = mid + 1;
        }
    }

    if(lb>ub)
    {
        printf("\nThe Element %d is not present at any location...\n",n);
    }
}