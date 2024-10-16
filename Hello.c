#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char chaine[] = "Hello World!";
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    char current[100] = "";
    int i, j;
    char car;

    for (i = 0; i < strlen(chaine)-1; i++)
    {
        j = 0;
        car = alphabet[rand() % (strlen(alphabet))];
        while (car != chaine[i])
        {
            printf("%s%c\n", current, car);
            usleep(5000);
            car = alphabet[rand() % (strlen(alphabet))];
            j++;
        }
        current[i] = car;
    }
    printf("%s\n", current);
    return 0;
}
