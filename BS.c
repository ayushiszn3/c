#include<stdio.h>
int main()
{
int ar[100],i,n,ele,pos;
int BS (int[],int,int);
printf("Enter size of an array\n");
scanf("%d",&n);
printf("\nEnter elements for an array\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&ar[i]);
}
printf("\nEnter the element you want to search\n");
scanf("%d",&ele);
pos=BS (ar,n,ele);
printf("\nUsing binary search:");
if(pos>0)
printf("\nElement found at position %d",pos);
else
printf("\nElement not found");
}
int BS (int ar[],int n, int ele)
{
int beg=0,end=n-1,mid,pos=0;
while(beg<=end)
{
mid=(beg+end)/2;
if(ar[mid]==ele)
{
pos=mid+1;
break;
}
else
if(ele>ar[mid])
beg=mid+1;
else
end=mid-1;
}
return (pos);
}