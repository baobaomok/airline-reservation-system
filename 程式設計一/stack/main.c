#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct element {                        // elements of the stack
    int data;
    struct element *next;   // point to the next element in the stack
};

struct head {
    int size;                               // record the size of the stack
    struct element *next;   // point to the bottom element in the stack if there is any
    struct element *top;    // point to the top of the stack
};

void print_stack(struct head *stack_p);
void push(struct head *stack_p, int data);      // put an element to the top of the stack
struct element *pop(struct head *stack_p);      // remove an element from the top of the stack

int main(void) {
    // stack declaration
    struct head stack_head;
    stack_head.size = 0;
    stack_head.next = NULL;
    stack_head.top = NULL;

    // read instructions
    int num, data;
    char command[5];
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) {
        scanf("%4s", command);
        if (strcmp(command, "push") == 0) {     // push command, call push()
            scanf("%d", &data);
            push(&stack_head, data);
        }
        else if (strcmp(command, "pop") == 0) { // pop command, call pop()
            struct element *e = pop(&stack_head);
            free(e);
        }
    }
    print_stack(&stack_head);
    return 0;
}

void print_stack(struct head *stack_p) {
    printf("%d\n", stack_p->size);
    for (struct element *ptr = stack_p->next; ptr != NULL; ptr = ptr->next)
        printf("%d ", ptr->data);
}
// Your code goes here
void push(struct head *stack_p, int data) {
    // create an element and push it to the top of the stack
    struct element* t = malloc(sizeof(struct element));
    if(stack_p->size==0){
        stack_p->next = t;
        stack_p->top = t;
        t->next = NULL;
        t->data = data;
    }
    else{
        stack_p->top->next = t;
        stack_p->top = t;
        t->next = NULL;
        t->data = data;
    }
    stack_p->size++;
}

struct element* pop(struct head *stack_p) {
    // return the element which is popped from the stack
    struct element* p = malloc(sizeof(struct element));
    struct element* t = malloc(sizeof(struct element));
    p = stack_p->next;
    //這個if很重要
    //不管怎麼要都要先判斷是否=NULL
    if(stack_p->next->next!=NULL)
        while(p->next->next!=NULL)
            p = p->next;
    t = stack_p->top;
    stack_p->top = p;
    stack_p->top->next = NULL;
    stack_p->size--;
    return t;
}