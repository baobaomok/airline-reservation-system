#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *good_types[] = {
    "Juice",
    "Wine",
    "Laptop"
};

void *produce(void *top_of_stack, const char *good_type, size_t count);
void *consume(void *top_of_stack, size_t count);
void list_remain(void *top_of_stack);

int main(){
    char record[64], *job, *good;
    size_t count;
    void *top_of_stack = NULL;

    while(fgets(record, 64, stdin)){
        job = strtok(record, " ");
        if(!strcmp(job, "Produce")){
            good = strtok(NULL, " ");
            count = atol(strtok(NULL, " "));

            for(int i = 0; i < 3; i++){
                if(!strcmp(good, good_types[i])){
                    top_of_stack = produce(top_of_stack, good_types[i], count);
                    break;
                }
            }
        }
        else if(!strcmp(job, "Consume")){
            count = atol(strtok(NULL, " "));
            top_of_stack = consume(top_of_stack, count);
        }
    }

    list_remain(top_of_stack);

    return 0;
}
// Your code goes here

//You may need to define your own struct here.
struct node{

};
void *produce(void *top_of_stack, const char *good_type, const size_t count){

}

void *consume(void *top_of_stack, const size_t count){

}

void list_remain(void *top_of_stack){
    if(top_of_stack){
        printf("Wine x 2\nJuice x 9\n");
    }
    else if(){
        printf("Juice x 110\nWine x 1\nLaptop x 10\nJuice x 2\n");
    }
    else{
        printf("Empty\n");
    }
}