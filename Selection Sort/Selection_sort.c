#include<stdio.h>

void main()
{
    int i,j,n,pos,swap=0,a[10];

    printf("\nEnter The Length of Array : ");
    scanf("%d",&n);

    printf("\nEnter the Elements of Array...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

 
    for (i = 0; i < n; ++i)
    {
        pos = i;
        for (j = i + 1; j < n; ++j)
        {
            if(a[j] < a[pos])
            {
                pos = j;
            }
        }

        if (pos != i)
        {     //  Do swapping
             swap = a[i];
             a[i] = a[pos];
             a[pos] = swap;
        }
}

    printf("\nSelection Sorted Array : ");

    for(i=0;i<n;i++)
    {
        printf("    %d\t",a[i]);
    }
    printf("\n");
}