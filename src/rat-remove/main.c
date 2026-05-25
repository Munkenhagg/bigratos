#include "rat-remove.h"

int main(int argc, char *argv) {
	rm_files();
	rm_dirs();
	unlist_installed();
	return 0;
}
