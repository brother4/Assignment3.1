#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"

int main (int argc, char *argv[]) 
{
    insert("!");
    insert("test");
    insert("my");
    insert("is");
    insert("This");
    printf("This is the first word %s\n", firstItem());
    
    char *followingItem;
    followingItem = nextItem();
    int count = 0;
    while (count <= 4) 
    {
        printf("This is the next word %s\n", followingItem);
        followingItem = nextItem();
        count++;
    }
    
    printf("Is my in the list? %d\n", search("my"));
    printf("Is ! in the list? %d\n", search("!"));
    printf("Is teemu in the list? %d\n", search("teemu"));
    
    printf("Is 1234 in the list? %d\n", search("1234"));
    
    delete("This");
    printf("The new first word should be is %s\n", firstItem());
    
    delete("is");
    delete("my");
    delete("test");
    delete("!");
    printf("There should be nothing left to delete %d", delete("This")); 
}