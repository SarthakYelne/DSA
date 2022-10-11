#include<stdio.h>

void main()
{
    int i,j,k,n,m,a[10],b[10],c[10];

    printf("\nEnter Length of Array A : ");
    scanf("%d",&n);

    printf("\nEnter %d Elements of Array : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter Length of Array B : ");
    scanf("%d",&m);

    printf("\nEnter %d Elements of Array : \n",m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }

    i=0;j=0;k=0;
    
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++; 
        }

        k++;
    }
        
    if(i>=n)
    {
        while(j<m)
        {
            c[k] = b[j];
            k++;
            j++;
        }
    }

    if(j>=m)
    {
        while(i<n)
        {
            c[k] = a[i];
            k++;
            i++;
        }
    }
    
    printf("\nMerge Sorted Array :      ");
    for(k=0;k<n+m;k++)
    {
        printf("%d \t",c[k]);
    }
    printf("\n");
}