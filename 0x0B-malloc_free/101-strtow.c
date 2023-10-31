#include "main.h"
#include <stdlib.h>

/**
*strtow - splits a string into words
*@str: string to be splitted
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
char **split;
int d, f = 0, temp = 0, size = 0, words = num_words(str);

if (words == 0)
return (NULL);
split = (char **) malloc(sizeof(char *) * (words + 1));
if (split != NULL)
{
for (d = 0; d <= len(str) && words; d++)
{
if ((str[d] != ' ') && (str[d] != '\0'))
size++;
else if (((str[d] == ' ') || (str[d] == '\0')) && d && (str[d - 1] != ' '))
{
split[f] = (char *) malloc(sizeof(char) * size + 1);
if (split[f] != NULL)
{
while (temp < size)
{
split[f][temp] = str[(d - size) +temp];
temp++;
}
split[f][temp] = '\0';
size = temp = 0;
f++;
}
else
{
while (f-- >= 0)
free(split[f]);
free(split);
return (NULL);
}
}
}
split[words] = NULL;
return (split);
}
else
return (NULL);
}


/**
* num_words - counts the number of words in str
*@str: string to be used
*
*Return: number of words
*/
int num_words(char *str)
{
int d = 0, words = 0;

while (d <= len(str))
{
if ((str[d] != ' ') && (str[d] != '\0'))
{
d++;
}
else if (((str[d] == ' ') || (str[d] == '\0')) && d && (str[d - 1] != ' '))
{
words += 1;
d++;
}
else
{
d++;
}
}
return (words);
}

/**
* len - returns length of str
*@str: string to be counted
*
* Return: length of the string
*/

int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
