#include "rat-info.h"

void print_f_or_none(const char *filepath, const char *fallback) {
    FILE *fp = fopen(filepath, "r");
    if (!fp) {
        printf("%s\n", fallback);
        return;
    }

    char line[512];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
}
