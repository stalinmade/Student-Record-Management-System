#include"student_header.h"
void sort_record(sll *ptr)
{

        printf("-------------------------------------------\n");
        if(ptr==0)
        {
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        int op;
        printf("1.Sort by name\n2.Sort by marks\nEnter your choice: ");
        scanf("%d",&op);
        sll t;
        switch(op)
        {
                case 1:
                        {
                                sll *i=ptr;
                                while(i!=0)
                                {
                                        sll *j=i->next;
                                        while(j!=0)
                                        {
                                                if(strcmp(i->name,j->name)>0)
                                                {
                                                        strcpy(t.name,i->name);
                                                        t.marks=i->marks;
                                                        strcpy(i->name,j->name);
                                                        i->marks=j->marks;
                                                        strcpy(j->name,t.name);
                                                        j->marks=t.marks;
                                                }
                                                j=j->next;
                                        }
                                        i=i->next;
                                }
                        }
                        printf("Sorting by name done\n");
                        printf("---------------------------------------\n");
                        break;
                case 2:
                        {
                                sll *i=ptr;
                                while(i)
                                {
                                        sll *j=i->next;
                                        while(j)
                                        {
                                                if(i->marks < j->marks)
                                                {
                                                        strcpy(t.name,i->name);
                                                        t.marks=i->marks;
                                                        strcpy(i->name,j->name);
                                                        i->marks=j->marks;
                                                        strcpy(j->name,t.name);
                                                        j->marks=t.marks;
                                                }
                                                j=j->next;
                                        }
                                        i=i->next;
                                }
                                printf("Sorting by marks done\n");
                                printf("---------------------------------------\n");
                        }
                        break;
                default: printf("----------------\nInvaliv choice\n-----------------\n");
        }
}
void save_record(sll *ptr)
{
        printf("-------------------------------------------\n");
        if(ptr==0)
        {
                printf("No records are present\n");
                printf("-------------------------------------------\n");
                return ;
        }
        FILE *fp=fopen("project.txt","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        printf("Data saved to file successfully\n");
        printf("-------------------------------------------\n");
        fclose(fp);
}