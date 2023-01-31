#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char stack[100];
int top=-1;
void push(char n){
    
    stack[++top]=n;
}
char pop(){
    if(top==-1)return -1;
    else
    return stack[top--];
}

int priority(char a){
    if(a=='(') return 0;
    if(a=='+'|| a=='-') return 1;
    if(a=='*'|| a=='/') return 2;

}
void main(){
    char str[20];
    char a,*x;
    scanf("%s",str);
    x=str;

    while(*x!= '\0'){
       
        if(*x>='0'&&*x<='9'){
            printf("%c",*x);
        }else if(*x == '('){
            push(*x);
        }else if(*x==')'){
            while((a=pop())!=')'){
                printf("%c",a);
            }
            
        // }else{
        //     while(priority(stack[top]) >= priority(*x)){
        //         printf("%c",pop());

        //     }
        //     push(*x);
        // }

        x++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
}