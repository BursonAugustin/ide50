#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

char caesar(char token, int key);

int main(int argc, string argv[]) {

    
    bool completetask = false;
    string myword = "";
    int keysize = 0;
    string userprompt = "";
    int Inputtext;
    int numberkey = 0;

    do
    {
         
        if(argc != 2)
        {
            printf("You didn't enter the correct number of keywords.\n");
            return 1;
        }
        else if(argv[1])
        {
            int length = strlen(argv[1]);
            for(int i = 0; i < length; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                     
                    printf("Your input contains illegal characters.\n");
                    return 1;
                }
                else
                {
                    
                    completetask  = true;
                    myword = argv[1];
                }
            }
        }
    } while(!completetask );
    
    
    keysize = strlen(myword);
    int keycodes[keysize];

    
    for(int i = 0; i < keysize;i++)
    {
        keycodes[i] = toupper(myword[i]) - 65;
    }

     userprompt = GetString();
    Inputtext = strlen( userprompt);

    for (int i = 0; i < Inputtext; i++)
    {
        
        if(!isalpha( userprompt[i]))
        {
            printf("%c",  userprompt[i]);
        }
        
        else
        {
            printf("%c", caesar( userprompt[i], keycodes[numberkey]));

              
            if(numberkey < keysize - 1)
            {
                numberkey++;
            }
            else
            {
                numberkey = 0;
            }
        }
    }

    
    printf("\n");
     return 0;
     }
     
     char caesar(char token, int key)
{
    if(islower(token))
    {
        return ((((token - 97)+key)%26)+97);
    }
    else
    {
        return ((((token - 65)  +key)%26)+65);
    }
}