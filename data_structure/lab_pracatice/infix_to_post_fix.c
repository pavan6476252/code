#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char stack[100];
int top = -1;
void push(char n)
{

    stack[++top] = n;
}
char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char a)
{
    if (a == '(')
        return 0;
    if (a == '+' || a == '-')
        return 1;
    if (a == '*' || a == '/')
        return 2;
}
void main()
{
    char str[20];
    char a, *e;
    scanf("%s", str);
    e = str;

    while (*e != '\0')
    {

        if (*e >= '0' && *e <= '9')
        {
            printf("%c", *e);
        }
        else if (*e == '(')
        {
            push(*e);
        }
        else if (*e == ')')
        {

            while ((a = pop()) != '(')
            {
                printf("%c", a);
            }
        
        }else{
            while(priority(stack[top]) >= priority(*e)){
                printf("%c",pop());

            }
            push(*e);
        }

        e++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}