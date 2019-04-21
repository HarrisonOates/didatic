// Harrison Oates 21/04/19
// Caesar Encrypter
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //define some variables
    int j;
    int k;
    int l = 0;
    // shows correct usage if key is not entered.
    if (argc != 2)
    {
        printf("Usage: ./Vigenere key\n");
        return 1;
    }
    // checks each character is alphabetic
   string s = (argv[1]);
       for(int i = 0; i > strlen(s); i++)
       {
           if(isalpha(s[i])== false)
           {
               printf("Input letters only\n");
               return 0;
            }
       }

        string plaintxt = get_string("Plaintext: ");
        // iterates over each character and prints in ciphertext
        printf("ciphertext:");
        for (int i = 0; i < strlen(plaintxt); i++)
        {
                if (isupper(plaintxt[i]))
                {
                    j = (l % strlen(s));
                    k = (toupper(s[j]) - 65);
                    printf("%c", (((plaintxt[i] + k) - 65) % 26) + 65);
                    l += 1;
                }
                    
                else if (islower(plaintxt[i]))
                {
                   j = (l % strlen(s));
                   k = (tolower(s[j]) - 97);
                   printf("%c", (((plaintxt[i] + k) - 97) % 26) + 97);
                   l += 1;
                }
                    
                else
                {
                    printf("%c", plaintxt [i]);
                }
        }
        printf("\n");
        return 0;
}


