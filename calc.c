#include"unites.h"
int calc(char op,int firstNumber,int secondNumber )
{int t;
switch(op)
    {
        case '+':
           t= firstNumber + secondNumber;
            break;

        case '-':
            t= firstNumber - secondNumber;
            break;

        case '*':
            t= firstNumber * secondNumber;
            break;

        case '/':
            if(secondNumber==0)
            {
                printf("invalid");
            }
            else
            t= firstNumber / secondNumber;
            break;

    }
return t;
}

