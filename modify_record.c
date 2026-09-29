#include"student_header.h"
void modify_record(sll *ptr)
{
        if(ptr==0)
        {
                printf("-------------------------------------------\n");
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        int op;
        printf("------------------------------\n1.Modify with roll number\n2.Modify with name\n3.Modify with marks\n------------------------\nEnter your choice: ");
        scanf("%d",&op);
        switch(op)
        {
                case 1:
                        {
                                int roll;
                                printf("Enter the roll number to search: ");
                                scanf("%d",&roll);
                                while(ptr)
                                {
                                        if(ptr->roll==roll)
                                        {
                                                printf("%d %s %.2f\n",ptr->roll,ptr->name,ptr->marks);
                                                printf("Enter new name and marks: ");
                                                scanf("%s %f",ptr->name,&ptr->marks);
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                        }
                        break;
                case 2:
                        {
                                char name[20];
                                printf("Enter name to search: ");
                                scanf("%s",name);
                                while(ptr)
                                {
                                        if(strcmp(ptr->name,name)==0)
                                        {
                                                int abc=0;
                                                printf("---------------------\n%d %s %.2f\n------------------------\n",ptr->roll,ptr->name,ptr->marks);
                                                printf("Press 1 to modify this record\n");
                                                printf("Press 0 to search next\n");
                                                scanf("%d",&abc);
                                                if(abc)
                                                {
                                                        printf("Enter new name and marks: ");
                                                        scanf("%s %f",ptr->name,&ptr->marks);
                                                        printf("-------------------\nRecord modified  sucessfully\n------------------------\n");
                                                }                                       }
                                        ptr=ptr->next;
                                }

                        }
                        break;
                case 3:
                        {

                                float marks;
                                printf("Enter marks to search: ");
                                scanf("%f",&marks);
                                while(ptr)
                                {
                                        if(ptr->marks==marks)
                                        {
                                                int abc=0;
                                                printf("---------------------\n%d %s %.2f\n------------------------\n",ptr->roll,ptr->name,ptr->marks);
                                                printf("Press 1 to modify this record\n");
                                                printf("Press 0 to search next\n");
                                                scanf("%d",&abc);
                                                if(abc)
                                                {printf("Enter new name and marks: ");
                                                        scanf("%s %f",ptr->name,&ptr->marks);
                                                        printf("-------------------\nRecord modified  sucessfully\n------------------------\n");
                                                }
                                        }
                                        ptr=ptr->next;
                                }
                        }
                        break;
                default : printf("-----------------\nInvalid choice\n-----------------------\n");
        }
}
