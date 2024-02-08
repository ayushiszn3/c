#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * link;
}* top;
struct node *newptr, *save;

int main()
{
int opt,ele,stack;
void push(int);
int pop();
void display(struct node*);
top=NULL;
printf("\nenter main menu\n");
printf("\n1.PUSH\n2.POP\n3.DISPLAy\n4.EXIT");
while(1)
{
printf("\n\nChoose an option: ");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter any element: ");
scanf("%d",&ele);
push(ele);
break;
case 2:ele=pop();
printf("popped element is %d",ele);
break;
case 3:display(top);
break;
case 4:exit(0);
break;
default:printf("\nkindly choose a valid option(1/2/3/4/)");
break;
}
}
}
void push(int ele)
{
newptr = (struct node*)malloc(sizeof (struct node));
newptr->info=ele;
newptr->link=NULL;
if(top==0)
top=newptr;
else
{
newptr->link=top;
top=newptr;
}
}
int pop()
{
int ele;
if(top==NULL)
{
printf("\nStack is underflowed");
return(0);
}
else
{
ele=top->info;
save=top;
top=top->link;
free(save);
return(ele);
}
}
void display(struct node *top)

{
    save = top;
    while (save != NULL)
    {
        printf("\n%d ", save->info);
        save = save->link;
    }
}



