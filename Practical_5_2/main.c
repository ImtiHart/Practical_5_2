#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Develop a program that reverses an input string using pointers.
STEPS:
• Read a string from the user.
• Create a function called reverseString that uses a char pointer to reverse the
string in place.
• Use two pointers: one at the start of the string and one at the end.
• Swap the characters at these pointers, then move them toward the center until
they meet or pass each other.
• Print the reversed string in the main function.*/


void reverseString(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    char save;
    while (start<end)
    {
        save=*start;
        *start=*end;
        *end=save;
        start++;
        end--;
    }
}
int main()
{
    char str[100];
    printf("Give any sentence to reverse: ");
    gets(str);
    reverseString(str);
    printf("The reversed sentence is %s", str);

}
