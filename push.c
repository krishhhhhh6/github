#include<stdio.h>
#define MAX 10
int main(){

int stack[10];
int top=-1;


    int value;
    printf("Enter the value you want to enter: ");
    scanf("%d", &value);
    if (top==MAX-1){
        printf("\nOVERFLOW !!!\n");
    }
    else {
        top++;
        stack[top]=value;
    }
    return 0;
    
}
