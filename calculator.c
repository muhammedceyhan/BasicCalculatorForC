#include<stdio.h>
int main(){
    int a = 1103;
    int b = 60024;
    char operation = '*';

    int result = 0;
    if(b != 0){   
        if(operation == '%'){
            result = a % b;
        }else if(operation == '/'){
            result = a / b;
        }else if(operation == '+'){
            result = a + b;
        }else if(operation == '-'){
            result = a - b;
        }else if(operation == '*'){
            result = a * b;
        }else{
            printf("unknown operation");
            return 0;
        } 
    }else {
        printf("Error: Can't divide by 0");
        return 0;
    }
    printf("The result of %d %c %d is: %d\n", a,operation,b,result);
    return 0;
}