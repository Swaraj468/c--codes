#include<stdio.h>
#include<cs50.h>

int main(){
    char answer[100];
    printf("What's your name?");
    scanf("%s", answer);
    printf("Hello, %s\n", answer);
}