#include"student_header.h"
void delete_all(sll **ptr)
{

        printf("-------------------------------------------\n");
        if(*ptr==0)
        {
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        sll *del;
        while((*ptr))
        {
                del=*ptr;
                (*ptr)=(*ptr)->next;
                free(del);
        }
        printf("All Record deleted sucessfully\n");
        printf("-------------------------------------------\n");
}