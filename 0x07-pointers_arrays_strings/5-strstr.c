#include "main.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
        int i;
        int j;

        for (j = 0; needle[j] != '\0'; j++)
                while (*haystack)
        {
                for (i = 0; needle[i]; i++)
                {
                        if (haystack[i] != needle[i])
                                break;
                }
                if (i != j)
                        haystack++;
                else
                        return (haystack);
        }
        return ('\0');
}
