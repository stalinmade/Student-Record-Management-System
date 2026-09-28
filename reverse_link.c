#include"student_header.h"
void reverse_link(sll **ptr)\
{
        printf("-------------------------------------------\n");
        if(ptr==0)
        {
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        sll *prev=0;
        sll *cur=*ptr;
        sll *next=0;
        while(cur)
        {
                next=cur->next;
                cur->next=prev;
                prev=cur;
                cur=next;
        }
        *ptr=prev;
        printf("Link reversed successfully\n");
        printf("-------------------------------------------\n");

}