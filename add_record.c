#include"student_header.h"
void add_record(sll **ptr)
{
        sll *new=malloc(sizeof(sll));
        new->next=0;
        printf("Enter roll name marks: ");
        scanf("%d %s %f",&new->roll,new->name,&new->marks);
        if((*ptr)==0)
        {
                *ptr=new;
                return;
        }
        sll *last=*ptr;
        while(last->next!=0)
                last=last->next;
        last->next=new;
}