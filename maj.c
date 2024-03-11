#include <stdio.h>

void upperCase(char *name)
{
    while (*name != '\0')
    {
        if(*name >= 'a' && *name <= 'z')
        {
            *name = *name - 32;
        }
        name++;
    }
    
}

int main(int argc, char const *argv[])
{
    char name[] = "Khalil";
    upperCase(name);
    printf("The name in uppercase: %s\n", name);
}