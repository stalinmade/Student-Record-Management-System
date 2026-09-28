#include"student_header.h"
void display_record(sll *ptr)
{
        printf("-------------------------------------------\n");
        if(ptr==0)
        {
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        while(ptr)
        {
                printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        printf("-------------------------------------------\n");
}
