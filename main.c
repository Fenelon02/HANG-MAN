#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct word
{
    char *tip;
    char *name;
    int len;
} word;


char* words(int position); 
int verificator(char *name, int position);

int main(void)
{   
    int mode;
    printf("Do you want to play as a team, and each one registers a word, or do you want to play with the registered words?\n[0] for team\n[1] for play alone\n");
    scanf_s("%d", &mode);
    if (mode == 0 || mode == 1)
    {
        if (mode == 0)
        {
            
        }

        else
        {

        }
    }
    else
    {
        while (mode != 0 && mode != 1)
        {
            printf("INVALID NUMBER.\n[0] for team\n[1] for play alone\n");
            scanf_s("%d", &mode);
        }
    }
    
    int number;
    printf("Tell me a number: ");
    scanf_s("%d", &number);
}

char* words(int number)
{
    char *name = "Alice";
    if (number == 1)
    {
        return name;
    }
    return 0;
}

int verificator(char *name, int position)
{
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", name[i]);
    } 
    return 0;
}