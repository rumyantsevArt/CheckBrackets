#include "brackets.h"

bool checkBrackets(const char* str)
{
    char stack[1000];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        if (c == '(' || c == '[' || c == '{')
        {
            if (top == 999)
                return false;

            stack[++top] = c;
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
                return false;
        }
    }

    return top == -1;
}
