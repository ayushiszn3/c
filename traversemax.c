#include<stdio.h>
int main()
{
int ar[100],i,n,m;
int maxselect (int[],int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
m=maxselect (ar,n);
printf("\nMax element=%d",m);
}
int maxselect (int ar[],int n)
{
int i,m;
m=ar[0];
for(i=0;i<=n-1;i++)
{
if(ar[i]>m)
m=ar[i];
}
return (m);
}

