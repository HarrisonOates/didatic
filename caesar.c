// Harrison Oates 21/04/19
// Caesar Encrypter
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // shows correct usage if key is not entered.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else 
    {
        int key = atoi(argv[1]);
        string plaintxt = get_string("Plaintext: ");
        // iterates over each character and prints in ciphertext
        printf("ciphertext:");
        for (int i = 0, j = strlen(plaintxt); i < j; i++)
        {
                if (isupper(plaintxt[i]))
                {
                    printf("%c", (((plaintxt[i] + key - 65) % 26) + 65));
                }
                    
                else if (islower(plaintxt[i]))
                {
                    printf("%c", (((plaintxt[i] + key - 97) % 26) + 97));
                }
                    
                else
                {
                    printf("%c", plaintxt [i]);
                }
        }
        printf("\n");
        return 0;
    }
}
