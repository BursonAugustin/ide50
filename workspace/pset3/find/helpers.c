/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        
        if (value == values[i])
        {
            return true;
        }
    }
    // TODO: implement a searching algorithm
    return false;
}

   // Sorts array of n values.
void sort(int values[], int n)
{   // Find small element in an unsorted array of size n.
    
    for (int i = 0; i < n; i++) {
        int small_content = i;
        for (int j = i+1; j < n; j++) {
            if (values[j] < values[small_content])
                small_content = j;
        }
        // Swap the small element with the first element of the unsorted array.
        int temp = values[i];
        values[i] = values[small_content];
        values[small_content] = temp;
    }
    return;
}
    
