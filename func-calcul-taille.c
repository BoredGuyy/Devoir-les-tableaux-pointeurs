#include <stdio.h>

int calculTaille(char *name)
{
    int taille = 0;

    while (*name != '\0')
    {
        taille++;
        name++;
    }

    return taille;    
}

int main(int argc, char const *argv[])
{
    char name[] = "Khalil";
    int taille = calculTaille(name);
    printf("La taille de %s est: %d\n", name, taille);

    return 0;
}
