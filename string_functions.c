#include "shell.h"

/**
* _strcmp - compares two strings
* @str1: compared to str2;
* @str2: compared to str1;
*
* Return: returns difference between strings
*/

int _strcmp(char *str1, char *str2)

{

int i = 0, output;

while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')

i++;

output = (*(str1 + i) -*(str2 + i));

return (output);

}

/**
* _strlen - returns the length of a string
* @t: string passed
*
* Return: returns length of string passed
*/

int _strlen(char *t)
{

int count = 0;

while (*t != '\0')

{
count++;
t++;
}

return (count);
}

/**
* _strncmp - compares two strings up to n bytes
* @str1: compared to str2
* @str2: compared to str1
* @n: number of bytes
*
* Return: difference between str1 and str2
*/

int _strncmp(char *str1, char *str2, int n)

{

int i;
for (i = 0; str1[i] && str2[i] && i < n; i++)
{
if (str1[i] != str2[i])
return (str1[i] - str2[i]);
}
return (0);
}

/**
* _strdup - dupicates string
* @t: to be duplicated
*
* Return: pointer to duplicate string
*/

char *_strdup(char *t)
{

char *ptr;
int i, len;

if (t == NULL)

return (NULL);

len = _strlen(t);
ptr = malloc(sizeof(char) * (len + 1));

if (!ptr)

return (NULL);

for (i = 0; *t != '\0'; t++, i++)

ptr[i] = t[0];

ptr[i++] = '\0';

return (ptr);

}

/**
* _strchr - locates a character in a string
* @t: string to be checked
* @s: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/

char *_strchr(char *t, char s)

{

while (*t)

{

if (*t == s)

return (t);

t++;

}

if (!s)

return (t);

return (NULL);

}
