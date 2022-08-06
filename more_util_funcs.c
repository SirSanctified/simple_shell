#include "shell.h"

/**
 * _strcpy - Copie Source To Destination Char
 * @dest:Destination
 * @src:Source
 * Return: Copie Of Char *
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }
dest[i] = '\0';
return (dest);
}
/**
 * _strcat - Concat Two String
 * @dest:First String
 * @src:Second String
 * Return:First String + Second String Char *
 */
char *_strcat(char *dest, char *src)
{
        char *s = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (s);
}
/**
 * _strchr - Locate Charactere In String
 * @s:String Search In
 * @c:Char To Search For
 * Return: Pointer To Char*
 */
char *_strchr(char *s, char c)
{

        do              {

                if (*s == c)
                        {
                        break;
                        }
                }       while (*s++);

return (s);
}
/**
 * _strncmp - Compare Amount (n) Of Characters Of Two Strings.
 * @s1: A String.
 * @s2: A String.
 * @n: Amount Of Characters To Compare.
 *
 * Return: 1 If The Strings Don't Match Otherwise 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
        size_t i;

        if (s1 == NULL)
                return (-1);
        for (i = 0; i < n && s2[i]; i++)
        {
                if (s1[i] != s2[i])
                {
                        return (1);
                }
        }
        return (0);
}
/**
 * _strdup - Duplicate A String
 * @str:String
 * Return: Duplicate String Failed Null
 */
char *_strdup(char *str)
{
        size_t len, i;
        char *str2;

        len = _strlen(str);
        str2 = malloc(sizeof(char) * (len + 1));
        if (!str2)
        {
                return (NULL);
        }

        for (i = 0; i <= len; i++)
        {
                str2[i] = str[i];
        }

        return (str2);
}

/**
 * check_delim - Checks If A Character Match Any Char *
 * @c: Character To Check
 * @str: String To Check
 * Return: 1 Succes, 0 Failed
 */
unsigned int check_delim(char c, const char *str)
{
        unsigned int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (c == str[i])
                        return (1);
        }
        return (0);
}

/**
 * _strtok - Token A String Into Token (strtrok)
 * @str: String
 * @delim: Delimiter
 * Return: Pointer To The Next Token Or NULL
 */
char *_strtok(char *str, const char *delim)
{
        static char *ts;
        static char *nt;
        unsigned int i;

        if (str != NULL)
                nt = str;
        ts = nt;
        if (ts == NULL)
                return (NULL);
        for (i = 0; ts[i] != '\0'; i++)
        {
                if (check_delim(ts[i], delim) == 0)
                        break;
        }
        if (nt[i] == '\0' || nt[i] == '#')
        {
                nt = NULL;
                return (NULL);
        }
        ts = nt + i;
        nt = ts;
        for (i = 0; nt[i] != '\0'; i++)
        {
                if (check_delim(nt[i], delim) == 1)
                        break;
        }
        if (nt[i] == '\0')
                nt = NULL;
        else
        {
                nt[i] = '\0';
                nt = nt + i + 1;
                if (*nt == '\0')
                        nt = NULL;
        }
        return (ts);
}

/**
 * _strcmp - Compare Two String
 * @s1:String 1
 * @s2:String 2
 * Return: 0 If Identical Otherwise How Much Diffrent
 */
int _strcmp(char *s1, char *s2)
{
int cmp = 0, i, len1, len2;
len1 = _strlen(s1);
len2 = _strlen(s2);

        if (s1 == NULL || s2 == NULL)
                return (1);
        if (len1 != len2)
                return (1);
        for (i = 0; s1[i]; i++)
        {
                if (s1[i] != s2[i])
                {
                        cmp = s1[i] - s2[i];
                        break;
                }
                else
                        continue;
        }
        return (cmp);
}
