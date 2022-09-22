#include "main.h"

/**
 *_strcat: concatenates the string pointed to by @src
 *at the end of dest,
 *@dest: the string that will be appended
 *@src: string to be concatenated upon
 *
 *Return - a pointer to the @dest

 */

char *_strcat(char *dest, char *str)
{
int i = 0, dest_len = 0;
while (dest[i++])
dest_len++;
for (i = 0; src[i]; i++)
dest[dest_len++] = src[i];
return (dest);
