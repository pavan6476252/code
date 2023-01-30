#include<stdio.h>
#include<string.h>
#include<stdlib.h>  
int main(){
    char name[20];
    char name1[20];
    char pip[3] = " | ";
fgets(name,20,stdin);
fgets(name1,20,stdin);

strncat(name, " | ",strlen(pip));
strncat(name, name1,strlen(name1));

system(name);



    return 1;
}