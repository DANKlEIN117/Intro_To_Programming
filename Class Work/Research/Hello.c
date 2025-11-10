#include <stdio.h>

#include <string.h>

int main(){

    char string1[] = "Dan";
    char string2[] = "Okoth";

    /*strlwr(string1);                                     converts string to lower case
        strupr(string1);                                     converts string to upper case
        strcat(string1, string2);                            Append string2 to end of string one
        strncat(string1, string2, 1);                        Append n characters from string2 to string1
        strcpy(string1, string2);                            Copy string2 to string1
        strncpy(string2, 2);                                 Copy n characters from string2 to string1
        strset(string1, '?');                                sets all characters in a string to a given character
    */
   strupr(string1);
   printf("\n%s",string1);
}