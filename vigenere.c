#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2) 
    {
        printf("Usage: ./vigenere key");
        return 1;
    }
    
    else
    {
        string s = argv[1];
        int k;
        int j;
        int l = 0;
        int flag = 0;
        
        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
                flag += 1;
            }
        }
        
        if(flag != 0)
        {
            printf("Enter a valid input.");
            return 1;
        }
        
        string plain = get_string("plaintext: ");
        printf("ciphertext: ");

        for(int i = 0; i < strlen(plain); i++)
        {
            if islower(plain[i])
            {
                j = (l % strlen(s));
                k = (tolower(s[j]) - 97);
                printf("%c", (((plain[i] + k) - 97) % 26) + 97);
                l += 1;
            }
            else if isupper(plain[i])
            {
                j = (l % strlen(s));
                k = (tolower(s[j]) - 97);
                printf("%c", (((plain[i] + k) - 65) % 26) + 65);
                l += 1;
            }
            else
            {
                printf("%c", plain[i]);
            }
         }
         printf("\n");
         return 0;
    }
   
}
