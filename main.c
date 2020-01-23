#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
void push();
void pop();
void display();
struct node* root=NULL;
int length=0;

void main()
{
    int ch;
    while(1) {
        printf("\n1.Push \n2. POP \n3. Display \n4. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                length++;
                push();
                break;
            case 2:
                length--;
                pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
        }
    }
}
void push(){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    // temp->data=0;
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=root;
    root=temp;
}

void pop(){
    int loc,i=1;
    struct node* p;
    p=root;
    loc=length;
    while(i<loc)
    {
        p=p->link;
        i++;
    }

    p->link=NULL;
}


void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("Queue is empty\n");
    }
    else {
        printf("%d->", temp->data);
        while (temp->link != NULL) {
            temp = temp->link;
            printf("%d-> ", temp->data);
        }
    }
}


