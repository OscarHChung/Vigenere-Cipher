#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2) 
    {
        printf("Usage: ./vigenere key");
    }
    
    else
    {
        string o = argv[1];
        int key = 0;
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");
        int l = 0;
   
        for(int i = 0; i < strlen(plain); i++)
        {
            l = i % strlen(o);
            if islower(plain[i])
            {
                key = o[l] - 97;
                printf("%c", (((plain[i] + key) - 97) % 26) + 97);
            }
            else if isupper(plain[i])
            {
                key = o[l] - 65;
                printf("%c", (((plain[i] + key) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", plain[i]);
            }
        }
    }
   
}
