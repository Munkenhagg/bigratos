#include "rat-remove.h"

int rm_files(int argc, char *argv[]) {
	if (argc < 2) {
		printf("usage: rat-remove <pkg>\n");
		return 1;
	}
	char *PKG = argv[1];
	char path[PATH_MAX_SZ];
	snprintf(path, sizeof(path), "%s/%s.files", DB, PKG);
	FILE *files = fopen(path, "r");
	if (!files) {
		fprintf(stderr, "error: %s is not installed or has no file records: %s\n", PKG, strerror(errno));
		return 1;
	}
	char file_path[PATH_MAX_SZ];
	struct stat f_st;
	while (fgets(file_path, sizeof(file_path), files)) {
		size_t len = strlen(file_path);
        	if (len > 0 && file_path[len - 1] == '\n') {
            		file_path[len - 1] = '\0';
        	}
		if (lstat(file_path, &f_st) == 0) {
            		if (S_ISREG(f_st.st_mode) || S_ISLNK(f_st.st_mode)) {
		                if (unlink(file_path) == 0) {
                			printf("removed %s\n", file_path);
		                } else {
                			fprintf(stderr, "failed to remove %s: %s\n", file_path, strerror(errno));
		                }
            		}
        	}
	}
	fclose(files);
	return 0;
}
