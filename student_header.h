#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct student
{
        int roll;
        char name[20];
        float marks;
        struct student *next;
}sll;

void add_record(sll **);
void delete_record(sll **);
void display_record(sll *);
void modify_record(sll *);
void save_record(sll *);
void sort_record(sll *);
void delete_all(sll **);
void reverse_link(sll **);
void delete(sll *,int);
void modify(sll *,int);
