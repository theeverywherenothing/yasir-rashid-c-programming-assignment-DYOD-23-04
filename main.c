#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

/* =========================================================
   QUESTION 1:
   Write a function that displays ONLY EVEN numbers
   from a double linked list
========================================================= */
void displayEven() {
    struct node *temp = head;
    printf("Even numbers: ");
    while (temp != NULL) {
        if (temp->data % 2 == 0)
            printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* =========================================================
   QUESTION 2:
   Write a function that displays ONLY PRIME numbers
========================================================= */
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void displayPrime() {
    struct node *temp = head;
    printf("Prime numbers: ");
    while (temp != NULL) {
        if (isPrime(temp->data))
            printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* =========================================================
   QUESTION 3:
   Write a program to find SUM of all numbers
   stored in a double linked list
========================================================= */
void findSum() {
    int sum = 0;
    struct node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    printf("Sum = %d\n", sum);
}

/* =========================================================
   QUESTION 4:
   Find SUM and AVERAGE of all numbers
   in a double linked list
========================================================= */
void sumAndAverage() {
    int sum = 0, count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
}

/* =========================================================
   QUESTION 5:
   Find MINIMUM and MAXIMUM element
   in a double linked list
========================================================= */
void findMinMax() {
    struct node *temp = head;
    int min = temp->data, max = temp->data;

    while (temp != NULL) {
        if (temp->data < min) min = temp->data;
        if (temp->data > max) max = temp->data;
        temp = temp->next;
    }
    printf("Min = %d\nMax = %d\n", min, max);
}

int main() {
    insert(10);
    insert(7);
    insert(4);
    insert(15);
    insert(2);

    displayEven();
    displayPrime();
    findSum();
    sumAndAverage();
    findMinMax();  

    return 0;
}

shebang@linux:~/tmp/yasir$ nano main.c 
shebang@linux:~/tmp/yasir$ cat main.c 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
    }
}

/* =========================================================
   QUESTION 1:
   Write a function that displays ONLY EVEN numbers
   from a double linked list
========================================================= */
void displayEven() {
    struct node *temp = head;
    printf("Even numbers: ");
    while (temp != NULL) {
        if (temp->data % 2 == 0)
            printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* =========================================================
   QUESTION 2:
   Write a function that displays ONLY PRIME numbers
========================================================= */
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void displayPrime() {
    struct node *temp = head;
    printf("Prime numbers: ");
    while (temp != NULL) {
        if (isPrime(temp->data))
            printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* =========================================================
   QUESTION 3:
   Write a program to find SUM of all numbers
   stored in a double linked list
========================================================= */
void findSum() {
    int sum = 0;
    struct node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    printf("Sum = %d\n", sum);
}

/* =========================================================
   QUESTION 4:
   Find SUM and AVERAGE of all numbers
   in a double linked list
========================================================= */
void sumAndAverage() {
    int sum = 0, count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
}

/* =========================================================
   QUESTION 5:
   Find MINIMUM and MAXIMUM element
   in a double linked list
========================================================= */
void findMinMax() {
    struct node *temp = head;
    int min = temp->data, max = temp->data;

    while (temp != NULL) {
        if (temp->data < min) min = temp->data;
        if (temp->data > max) max = temp->data;
        temp = temp->next;
    }
    printf("Min = %d\nMax = %d\n", min, max);
}

int main() {
    insert(10);
    insert(7);
    insert(4);
    insert(15);
    insert(2);

    displayEven();
    displayPrime();
    findSum();
    sumAndAverage();
    findMinMax();  

    return 0;
}
