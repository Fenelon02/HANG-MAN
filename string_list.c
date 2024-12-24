#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    char *name;
    struct node *previous;
}node;

int len = 0;
node *init = NULL;
node *end =  NULL;

int list(char*name);
void print(void);

int main(void)
{
    list("name");
    list("APPpp");
    print();
}

int list(char *word)
{
    node *element = malloc(sizeof(node));
    if (element == NULL) {
        printf("No memory available\n");
        return -1; 
    }

    element->name = word;
    element->previous = NULL;

    if (len == 0)
    {
        init = element;
        end = element;
    }

    else
    {
        element->previous = end;
        end = element;
    }
    len++;
    return len;
}

void print(void)
{
    node *aux = init;
    while (aux != NULL) 
    {
        int i = 0;
        while (aux->name[i] != '\0')
        {
            printf("%c", aux->name[i]);
            i++;
        }
        printf("\n");
        aux = aux->previous;
    }
}