#include <stdio.h>

//Simple Calculator
#include <stdio.h>
int main()
{
    char operator;
    float first,second,value;
    printf("Simple Calculator. \n Please provide operator and two numbers with dot symbol.\n");
    scanf("%c %f %f ", &operator,&first, &second);
    switch (operator) {
    case '+': value = first + second;
              printf("%f %c %f = %f", first,operator, second, value);
              break;
    case '-':value = first - second;
             printf("%f %c %f = %f", first,operator, second,value);
              break;
    case '*': value = first * second;
             printf("%f %c %f = %f", first,operator, second,value);
             break;
    case '/': if(second != 0)
             { value = first/second;
             printf("%f %c %f = %f", first,operator ,second,value);
            }
            else {
            printf("Divide by zero error");}
            break;
    default:
            printf("Error! operator is not correct");
            break;
    }

    return 0;
}