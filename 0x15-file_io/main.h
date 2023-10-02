#ifndef MAIN_H
#define MAIN_H

/* Header files */
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
