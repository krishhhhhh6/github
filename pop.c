#include<stdio.h>
#define MAX 10
int main(){

int stack[10]={1,2,3,4,5,6,7,8,9,0};
int top=9;
int value;
    
    // pop sirf last elememt hatata hai in stack
        value = stack[top];
        top--;
        printf("\nPopped %d from the stack !!\n", value);
    
    return 0;
}
