// Making a strcopy function of our own'

#include <stdio.h>
#include <string.h>
void strcopy(char src[], char target[])
{
    for (int i = 0; i < strlen(src); i++)
    {
        target[i] = src[i];
    }
    target [strlen(src)] = '\0';
    printf("%s", target);
}

void main()
{
    char src[] = "Shivang Codes";
    char target[30];
    strcopy(src, target);
}