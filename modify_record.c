#include"student_header.h"
void modify(sll *ptr,int roll)
{
        while(ptr)
        {
                if(ptr->roll==roll)
                {

                        printf("Enter name and marks to modify: ");
                        scanf("%s %f",ptr->name,&ptr->marks);
                        printf("----------------------------\nRecord modified successfully\n--------------------------------\n");
                        return;
                }
                ptr=ptr->next;
        }
        printf("--------------------------------------------\nNo record found on the rearch\n-------------------------------------\n");
}
void modify_record(sll *ptr)
{
        if(ptr==0)
        {
                printf("-------------------------------------------\n");
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        sll *temp=ptr;
        int op;
        printf("------------------------------\n1.Modify with roll number\n2.Modify with name\n3.Modify with marks\n------------------------\nEnter your choice: ");
        scanf("%d",&op);
        switch(op)
        {
                case 1: {
                                int num;
                                printf("Enter roll number to modify: ");
                                scanf("%d",&num);
                                modify(ptr,num);
                        }
                        break;
                case 2:
                        {
                                char name[20];
                                printf("Enter name to search: ");
                                scanf("%s",name);
                                printf("--------------------------------------------\n");
                                int flag=0;
                                while(ptr)
                                {
                                        if(strcmp(ptr->name,name)==0)
                                        {
                                                flag=1;
                                                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                                        }
                                        ptr=ptr->next;
                                }
                                if(flag==1)
                                {
                                        printf("--------------------------------------------\n");
                                        printf("Enter roll number to modify: ");
                                        int num;
                                        scanf("%d",&num);
                                        modify(temp,num);
                                }
                                else

                                        printf("--------------------------------------------\nNo record found on the rearch\n-------------------------------------\n");
                        }
                        break;
                case 3:
                        {

                                float marks;
                                printf("Enter marks to search: ");
                                scanf("%f",&marks);
                                int flag=0;
                                while(ptr)
                                {
                                        if(ptr->marks==marks)
                                        {
                                                flag=1;
                                                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                                        }
                                        ptr=ptr->next;
                                }
                                if(flag==1)
                                {
                                        printf("--------------------------------------------\n");
                                        printf("Enter roll number to modify: ");
                                        int num;
                                        scanf("%d",&num);
                                        modify(temp,num);
                                }
                                else

                                        printf("--------------------------------------------\nNo record found on the rearch\n-------------------------------------\n");
                        }
                        break;
                default : printf("-----------------\nInvalid choice\n-----------------------\n");
        }
}
