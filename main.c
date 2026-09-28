#include"student_project.h"
void main()
{
        sll *head=0;
        int op;
        while(1)
        {
                printf("******** STUDENT RECORD MENU *********\n1 : Add new record\n2 : Delete a record\n3 : Show the list\n4 : Modify a record\n5 : Save records\n6 : Exit\n7 : Sort the list\n8 : Delete all the records\n9 : Reverse the list\nEnter your choice: ");
                scanf("%d",&op);
                switch(op)
                {
                        case 1: add_record(&head); break;
                        case 2:delete_record(&head); break;
                        case 3: display_record(head); break;
                        case 4: modify_record(head); break;
                        case 5: save_record(head); break;
                        case 6: save_record(head);
                                delete_all(&head);
                                exit(0);
                                break;
                        case 7: sort_record(head); break;
                        case 8:delete_all(&head); break;
                        case 9:reverse_link(&head); break;
                        default:printf("-----------------------\nInvalid choice\n-------------------------------\n"); break;
                }
        }
}