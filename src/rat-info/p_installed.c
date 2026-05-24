#include "rat-info.h"

bool p_installed(const char *package) {
    char line[512];
    FILE *fp = fopen(DB "/installed", "r");
    if (!fp) return false;

    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = 0;
        if (strcmp(line, package) == 0) {
            fclose(fp);
            return true;
        }
    }

    fclose(fp);
    return false;
}
