
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 
int main(int argc, string argv[])
{
    
    int decoder;
    int result;
   
    
    if (argc != 2)
    {
        printf("Please enter more arugments.\n");
        return 1;
    }
    
    
    string PlainText = GetString();

      
    decoder = atoi(argv[1]);
    
    
    if (decoder >= 26)
    {
        decoder = (decoder % 26);
    }
       for(int i = 0, length = strlen(PlainText); i < length; i++)
    {
            result = (PlainText[i] + decoder);
            if (isupper(PlainText[i]) && (result > 'Z'))
        {
            result = (result - 26);
        }
            if (islower(PlainText[i]) && (result > 'z'))
        {
            result = (result - 26);
        }
            if (isalpha(PlainText[i]))
        {
            printf("%c", result);
        }
         
         
        else
        {
            printf("%c", PlainText[i]);
        }
            
    }
    
    printf("\n");
    return 0;
}

  