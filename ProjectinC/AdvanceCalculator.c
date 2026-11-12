#include<stdio.h>
int main()
{
    char operator;
    double num1, num2, result;

    //Display the welcome message
    printf("--- Advance C Calculator ---");

    //Input operator
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    //Input two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num1 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf(" Error! Division by zero is not allowed.\n");
            }
            break;
        case '%':
             if((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %.0lf\n", (int)num1, (int)num2, result);
            }
                break;

        default:
            printf("Error! Operator isn't valid.\n");
         
        }
        
        
        return 0;    


}