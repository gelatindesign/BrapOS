/**
 * help.c
 * @desc Provide help information on other programs
 * @author Laurence Roberts
 */
#define _program_name "help"
#define _program_author "Laurence Roberts"

#define MAX_PATH_LENGTH 255
#define MAX_LINE_LENGTH 80

/* Include BNU headers */
#include "core.h"
#include "error.h"


main(int argc, char *argv[]) {
	FILE *fp;
	char *fn;
	char path[MAX_PATH_LENGTH] = "C:\\Users\\Laurence\\Documents\\BrapOS\\"; /* temp */
	char line[MAX_LINE_LENGTH];
	int eof = 0;
	
	if (argc!=2)
		return EXIT_FAILURE;
	
	fn = strncat(path, argv[1], MAX_PATH_LENGTH);
	fn = strncat(path, ".help", MAX_PATH_LENGTH);
	
	fp = fopen(path, "r");
	if (fp == NULL) {
		printf("No help file provided for %s\n", argv[1]);
		return EXIT_FAILURE;
	}
	
	printf("help file for '%s'\n---\n", argv[1]);
	while (fgets(line, MAX_LINE_LENGTH, fp))
		printf("%s", line);
	
	fclose(fp);
	return EXIT_SUCCESS;
}