#include <stdio.h>
#include <string.h>

int main(int argc, char*argv[]) {
	int i;

	for (i = 1; i < argc; i++)
		printf("%s%s", argv[i], (i < argc - 1) ? "" : "\n");

	//for (i = 0; i < argc; i++)
		//printf("%s%s", *(argv + i), (i < argc - 1) ? "" : "\n");


	return 0;
}