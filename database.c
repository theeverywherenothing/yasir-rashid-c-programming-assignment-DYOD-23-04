#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* =========================================================
   QUESTION 6:
   Create a double linked list for STUDENT DATABASE
   (Roll No, Name, Marks)
   Display only PASSING students (Marks > 40)
========================================================= */

struct student {
    int roll;
    char name[30];
    float marks;
    struct student *prev;
    struct student *next;
};

struct student *head = NULL;

void insertStudent(int roll, char name[], float marks) {
    struct student *newnode = (struct student *)malloc(sizeof(struct student));
    newnode->roll = roll;
    newnode->marks = marks;
    strcpy(newnode->name, name);
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct student *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void displayPass() {
    struct student *temp = head;
    printf("\nPassing Students (Marks > 40):\n");
    while (temp != NULL) {
        if (temp->marks > 40) {
            printf("Roll: %d  Name: %s  Marks: %.2f\n",
                   temp->roll, temp->name, temp->marks);
        }
        temp = temp->next;
    }
}

int main() {
    insertStudent(1, "Rahul", 65);
    insertStudent(2, "Anita", 35);
    insertStudent(3, "Suresh", 78);
    insertStudent(4, "Neha", 42);

    displayPass();
    return 0;
}
