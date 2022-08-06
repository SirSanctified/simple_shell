#include "shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
        while (i < n && *(src + i))
        {
        *(dest + i) = *(src + i);
        i++;
        }
        while (i < n)
        {
        *(dest + i) = '\0';
        i++;
        }
        return (dest);
}

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */

int _strlen(char *s)
{
        int i;

                for (i = 0; s[i] != '\0'; i++)
                {
                        continue;
                }
return (i);
}

/**
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */
int _atoi(char *s)
{
int i, j, n, x;

        i = n = 0;
        x = 1;
        while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
        {
                if (s[i] == '-')
                        x *= -1;
                i++;
        }
        j = i;
        while ((s[j] >= '0') && (s[j] <= '9'))
        {
                n = (n * 10) + x * ((s[j]) - '0');
                j++;
        }
        return (n);
}
/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */
void _puts(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                _putchar(str[i]);
        }
_putchar('\n');
return;
}

/**
 * _isalpha - Check if Alphabtic
 *@c: Character
 * Return: 1 If True 0 If Not
 */
int _isalpha(int c)
{
		if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		{
				return (1);
		}
		else
		{
				return (0);
		}
}
/**
 * _itoa - Convert Integer To Char
 * @n: Int To Convert
 * Return: Char Pointer
 */
char *_itoa(unsigned int n)
{
        int len = 0, i = 0;
        char *s;

        len = intlen(n);
        s = malloc(len + 1);
        if (!s)
                return (NULL);
        *s = '\0';
        while (n / 10)
        {
                s[i] = (n % 10) + '0';
                n /= 10;
                i++;
        }
        s[i] = (n % 10) + '0';
        array_rev(s, len);
        s[i + 1] = '\0';
        return (s);
}
/**
 *  array_rev - Reverse Array
 * @arr:Array To Reverse
 * @len:Length Of Array
 * Return: Void(Reverse Array)
 */
void array_rev(char *arr, int len)
{
        int i;
        char tmp;

        for (i = 0; i < (len / 2); i++)
        {
                tmp = arr[i];
                arr[i] = arr[(len - 1) - i];
                arr[(len - 1) - i] = tmp;
        }
}
/**
 * intlen - Determine Length Of Int
 * @num: Given Int
 * Return: Length Of Int
 */
int intlen(int num)
{
        int len = 0;

        while (num != 0)
        {
                len++;
                num /= 10;
        }
        return (len);
}
