#include"student_header.h"
void delete_record(sll **ptr)
{
        if(*ptr==0)
        {
                printf("-------------------------------------------\n");
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        int op;
        printf("-----------------------\n");
        printf("1.To delete by roll number\n2.To delete by name\n");
        printf("Enter your option: ");
        scanf("%d",&op);
        switch(op)
        {
                case 1:
                        {
                                int roll;
                                printf("Enter roll number to delete: ");
                                scanf("%d",&roll);
                                sll *del=*ptr;
                                sll *prev=del;
                                while(del)
                                {
                                        if(del->roll==roll)
                                        {
                                                if(del==*ptr)
                                                {
                                                        *ptr=del->next;
                                                }
                                                else if(del->next==0)
                                                {
                                                        prev->next=0;
                                                }
                                                else
                                                {
                                                        prev->next=del->next;
                                                }
                                                free(del);
                                                return;
                                        }
                                        prev=del;
                                        del=del->next;
                                }
                                break;
                        }

                case 2:
                        {

                                char name[20];
                                printf("Enter name to delete: ");
                                scanf("%s",name);
                                sll *del=*ptr;
                                sll *prev=del;
                                while(del)
                                {
                                        if(strcmp(del->name,name)==0)
                                        {
                                                if(del==*ptr)
                                                {
                                                        *ptr=del->next;
                                                }
                                                else if(del->next==0)
                                                {
                                                        prev->next=0;
                                                }
                                                else
                                                {
                                                        prev->next=del->next;
                                                }
                                                free(del);
                                                return;
                                        }
                                        prev=del;
                                        del=del->next;
                                }

                        }
                        break;
                default : printf("Invalidd option\n");
                          printf("--------------------------------------\n");
        }
}