#include "rat-info.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf(">> Installed packages:\n");
        print_f_or_none(DB "/installed", "none");
    } else {
        const char *pkg = argv[1];

        if (p_installed(pkg)) {
            printf(">> Package: %s\n", pkg);
            printf(">> Status: installed\n");
            printf(">> Files:\n");

            char filepath[1024];
            snprintf(filepath, sizeof(filepath), "%s/%s.files", DB, pkg);
            print_f_or_none(filepath, "no file records");
        } else {
            printf(">> %s is not installed\n", pkg);
        }
    }

    return 0;
}
