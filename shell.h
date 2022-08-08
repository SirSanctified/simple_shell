#ifndef SHELL_H
#define SHELL_H



extern char **environ;


#define BUFSIZE 1024
#define DELIM " \t\r\n\a"
#define PRINTER(c) (write(STDOUT_FILENO, c, _strlen(c)))

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>



char *_strtok(char *str, const char *tok);
unsigned int check_delim(char c, const char *str);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
void array_rev(char *arr, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);
int path_cmd(char **cmd);
char *build(char *token, char *value);
char *_getenv(char *name);
char *_getline();
void hashtag_handle(char *buff);
int echo(char **cmd, int st);
int help(char **cmd, __attribute__((unused))int er);
int this_env(__attribute__((unused)) char **cmd, __attribute__((unused)) int er);
int cd(char **cmd, __attribute__((unused))int er);
void  exit(char **cmd, char *input, char **argv, int c);
int print_echo(char **cmd);
int _history(__attribute__((unused))char **c, __attribute__((unused))int s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_all(char **cmd, char *line);
char *_memcpy(char *dest, char *src, unsigned int n);
void *fill_an_array(void *a, int el, unsigned int len);
void *_calloc(unsigned int size);
void signal_to_handel(int sig);
int check_cmd(char **cmd, char *input, int c, char **argv);
int handle_builtin(char **cmd, int er);
#endif
