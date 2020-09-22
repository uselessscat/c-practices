// Implements a dictionary's functionality

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Number of buckets in hash table
const unsigned int N = 10;

// Hash table
node *table[N];

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    return false;
}

unsigned int hash(const char *data)
{
    return 0;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    return false;
}