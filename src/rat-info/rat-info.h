#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#ifndef RAT_INFO_H
#define RAT_INFO_H

#define LINE_SZ 512
#define DB "/usr/ports/db"

int main(int argc, char *argv[]);
void print_f_or_none(const char *filepath, const char *fallback);
bool p_installed(const char *package);

#endif
