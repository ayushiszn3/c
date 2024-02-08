#include<stdio.h>
int display(int ar[],int n)
{
    int i;
    for(i=0 ; i<=n-1 ; i++)
    {
        printf("\t%d",ar[i]);
    }
    return 0;
}
int main()
{
int ar[100],i,n;
printf("\nEnter size of the array\n");
scanf("%d",&n);
printf("\nEnter element\n");
for(i=0;i<=n-1;i++)
{
    scanf("%d",&ar[i]);
}
printf("\ntraversed element\n");
display(ar,n);
}

