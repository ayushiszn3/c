
#include<stdio.h>
int swap(int*a, int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    return(0);
}
int main()
{
    int a,b;
    printf("enter any two no.");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping");
    printf("%d\t%d",a,b);
    swap(&a,&b);
    printf("\nafter swapping");
    printf("%d\t%d",a,b);
}