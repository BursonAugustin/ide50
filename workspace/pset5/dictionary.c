/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include "dictionary.h"

int hash(const char *word);

// global word varialbes
char word[size + 1];
int word_count = 0;

typedef struct node 
{
    char *word;
    struct node *next;
} node;

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
     node *newnode = malloc(sizeof(newnode));
    int hashv = hash(word);
    newnode = hasht[hashv];
    
    while(newnode != NULL) 
    {
        if (strcasecmp(word, newnode->word) = 0)
        {
	        return true;
        }
        newnode = newnode->next;
    }
    return false;
}


/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // TODO
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
