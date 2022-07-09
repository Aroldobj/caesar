#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    int trackdigit = 0;
    int strtoint;
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                trackdigit+=1;
            }
        }
            if (trackdigit == strlen(argv[1]))
            {
                strtoint = atoi(argv[1]);
                string plain = get_string("Plaintext: ");
                printf("Ciphertext:");
                for (int j = 0, m = strlen(plain); j < m; j++)
                {
                    if (isalpha(plain[j]) && isupper(plain[j]))
                    {
                        printf("%c", (((plain[j] - 65) + strtoint) % 26) + 65);
                    }
                    else if (isalpha(plain[j]) && islower(plain[j]))
                    {
                        printf("%c", (((plain[j] - 97) + strtoint) % 26) + 97);
                    }
                    else
                    {
                        printf("%c", plain[j]);
                    }
                }
                printf("\n");
                printf("Sucess\n");
                printf("%i\n", strtoint);
                printf("\n");
                return 0;
            }
            else
            {
                printf("Usage: ./Caesar key\n");
                return 1;
            }
    }
    else
    {
        printf("Usage: ./Caesar key\n");
        return 1;
    }
}