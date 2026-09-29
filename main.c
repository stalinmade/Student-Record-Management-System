#include"student_project.h"
void main()
{
        sll *head=0;
        char op;
        while(1)
        {
                printf("******** STUDENT RECORD MENU *********\na : Add new record\nd : Delete a record\nb : Show the list\nm : Modify a record\ns : Save records\ne : Exit\nc : Sort the list\nf : Delete all the records\nr : Reverse the list\nEnter your choice: ");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'a': add_record(&head); break;
                        case 'd': display_record(head);delete_record(&head); break;
                        case 'b': display_record(head); break;
                        case 'm': modify_record(head); break;
                        case 's': save_record(head); break;
                        case 'e': save_record(head);
                                  delete_all(&head);
                                  exit(0);
                                  break;
                        case 'c': sort_record(head); break;
                        case 'f': delete_all(&head); break;
                        case 'r': reverse_link(&head); break;
                        default:printf("-----------------------\nInvalid choice\n-------------------------------\n"); break;
                }
        }
}
