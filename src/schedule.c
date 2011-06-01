/**
 * schedule.c
 * @desc Schedule commands to run at intervals or set times
 * @author Laurence Roberts
 */
#define _program_name "schedule"
#define _program_author "Laurence Roberts"

#define MAX_PATH_LENGTH 255
#define MAX_LINE_LENGTH 80

/* Include BNU headers */
#include "core.h"
#include "error.h"

FILE *fp;
char *fn;
int eof = 0;
char path[MAX_PATH_LENGTH] = "C:\\Users\\Laurence\\Documents\\BrapOS\\.schedule"; /* temp */
char line[MAX_LINE_LENGTH];

int list() {
	fp = fopen(path, "r");
	if (fp == NULL) {
		return EXIT_FAILURE;
	}
	
	while (fgets(line, MAX_LINE_LENGTH, fp))
		printf("%s", line);
	
	fclose(fp);
	return EXIT_SUCCESS;
}

int add() {
	return EXIT_SUCCESS;
}

int remove() {
	return EXIT_SUCCESS;
}

main(int argc, char *argv[]) {
	
	if (argc!=2)
		return EXIT_FAILURE;
	
	return list();
}