#include "main.h"
/** str1 − This is the main C string to be scanned.Hello world abcdefghijklmno
 * str2 − This is the string containing the list of characters to match in str1 - pick one character from here and check through the entire s1 string to see if it matches another. For example, abcgfhskht
*/
unsigned int _strspn(char *s, char *accept)
{
	int i; /*count of s */
	int j; /* count of accept */
	int count = 0; /* matching characters */

	for (i = 0; s[i] < '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] < '\0'; j++)
			{	
				if (s[i] == accept[j])
				{
					count ++;
					return (count);
				}
			}		
		}	
	}	return ('\0');
}
