#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *file = fopen("Phonebook.csv", "a");

    //Get string from user
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    //Print(write) strings to file
    fprintf(file, "%s,%s\n",name,number);

    //close file
    fclose(file);
}
