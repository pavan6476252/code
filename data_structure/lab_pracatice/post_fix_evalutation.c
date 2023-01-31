#include<stdio.h>
int stack[100];
int top=-1;

int operation(int a ,int b , char c){
    switch(c){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
}


void push(int x){
    stack[++top] =x;
}
int pop(){
    return stack[top--];
}

int main(){

    char str[20];
    scanf("%s",str);
    char *e,x;
    e=str;
    while(*e!='\0'){
        if(*e>='0'&&*e<='9'){
            push((int) *e -'0');
        }
        else if(*e=='+'||*e=='-'||*e=='*'||*e=='/'){
           int res = operation(pop(),pop(),*e);
           push(res);
        }

        e++;
    }
    printf("%d",pop());
    return 0;
}