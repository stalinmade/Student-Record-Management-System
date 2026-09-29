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
                                                printf("-------------------\nRecord deleted sucessfully\n------------------------\n");
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
                                                int abc=0;
                                                printf("-------------------------\nThis the record what to delete\n%d %s %f\npress 1 to delete\npress 0 to search for next one\n--------------------------\n",del->roll,del->name,del->marks);
                                                scanf("%d",&abc);
                                                if(abc==1)
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
                                                        printf("-------------------\nRecord deleted sucessfully\n------------------------\n");
                                                        free(del);
                                                        return;
                                                }
                                        }
                                        prev=del;
                                        del=del->next;
                                }

                        }
                        break;
                default : printf("------------------------------\nInvalid option\n--------------------------\n");
        }
}
