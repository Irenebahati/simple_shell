#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

ssize_t write_prompt(const char *prompt);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
