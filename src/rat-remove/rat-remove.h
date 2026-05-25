#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <libgen.h>

#ifndef RAT_REMOVE_G
#define RAT_REMOVE_H

int rm_files(int argc, char *argv[]);
int rm_dirs();
int unmark_installed(char *PKGNAME);

#define DB "/usr/ports/db"
#define PATH_MAX_SZ 512

#endif

