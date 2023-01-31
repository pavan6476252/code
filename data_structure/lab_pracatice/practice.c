#include<stdio.h>
char stack[100];
int top=-1;
    int priority(char a){
        if(a=='(')return 0;
        if(a=='+'|| a=='-')return 1;
        if(a=='*'|| a=='/')return 2;
    }
void push(char a){
    stack[++top] = a;
}
char pop(){
    if(top==-1)return -1;
    return stack[top--];
}
    
int main(){

    //infix to postifx;
    char str [20] = "(2+3)*4";
    scanf("%s",str);
    char *e,x;
    e= str;
    while(*e!= '\0'){
        if(*e>='0'&&*e<='9'){
            printf("%c",*e);
        }else if(*e=='('){
            push(*e);
        }else if(*e == ')'){
            while((x= pop())!='('){
                printf("%c",x);
            }
        }else {
            if(priority(stack[top]) >= priority(*e)){
                printf("%c",pop());
            }else
            push(*e);
        }


        e++;
    }
    while((x =pop())!=-1)
    printf("%c",x);

    return 0;
}