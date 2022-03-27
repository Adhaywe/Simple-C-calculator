#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * A simple c calculator
 * @num1: float input number one
 * @num2: float input number two
 * @operator: char (operator)
 * @result: float
 *
 * Return 0;
 */
 int main(int argc, char *argv[])
 {
     float num1;
     float num2;
     char operator;
     float result;

     printf("Enter your num1 operator num2:\n\n");
     scanf("%f %c %f",&num1, &operator, &num2);

     switch(operator)
     {
         case '/': result = num1/num2;
         break;
         case '*': result = num1*num2;
         break;
         case '+': result = num1+num2;
         break;
         case '-': result = num1-num2;
         break;
         case '^': result = pow(num1,num2);
         break;
         case ' ': result = sqrt(num2);
         break;
         default: goto fail;
     }
     printf("%.9g %c %.9g = %.6g\n\n", num1, operator, num2, result);
     goto exit;
     fail:
         printf("Fail.\n\n");
     exit:
         return 0;
 }

