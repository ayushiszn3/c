
#include <stdlib.h>
#include<stdio.h>
struct node
{
    int info;
    struct node* link;
};

struct node *start, *newptr, *save;

void create(int);
void display(struct node*);

int main()
{
    int ele;
    char ans;
    start = NULL;

    while (1)
    {
        printf("\nEnter element: ");
        scanf("%d", &ele);
        create(ele);

        printf("Want to continue (Y/N)? ");
        scanf(" %c", &ans);  
        if (ans == 'Y' || ans == 'y')
            continue;
        else
            break;
    }

    printf("Display elements:\n");
    display(start);

    return 0;
}

void create(int ele)
{
    newptr = (struct node*)malloc(sizeof(struct node));
    if (newptr == NULL)
    {
        printf("\nOut of memory\n");
        return;
    }

    newptr->info = ele;
    newptr->link = NULL;

    if (start == NULL)
    {
        start = newptr;
    }
    else
    {
        save = start;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newptr;
    }
}

void display(struct node *start)
{
    save = start;
    if (save == NULL)
    {
        printf("Linked list is empty\n");
        return;
        }

    while (save != NULL)
    {
        printf("%d ", save->info);
        save = save->link;
    }
}
