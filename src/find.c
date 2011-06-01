/**
 * find.c
 * @desc Search files by tag and filename glob match
 * @author Laurence Roberts
 */
#define _program_name "find"
#define _program_author "Laurence Roberts"

/* Keywords */
/*#define _keywords_size 2
const char _keywords[_keywords_size][10] = {"help", "describe"};*/

/* Include BNU headers */
#include "core.h"
#include "error.h"

void describe() {
	
}

void validate() {

}

void execute() {

}

main(int argc, char *argv[]) {
	char meta[100];
	char data[100];
	char variable[20];
	
	if (argc == 1) {
		/* If no command is given then output help and exit */
		return EXIT_FAILURE;
	}
	
	if (is_keyword(argv[1])) {
		return EXIT_SUCCESS;
	}
	
	if (argc == 4) {
		/* If a variable is given */
		
	}
	
	if (argc >= 3) {
		/* If a literal filename search is given */
		
	}
	return EXIT_SUCCESS;
}