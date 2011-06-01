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

/*void help() {
	printf("\nsearch help\n");
	printf("\t{string} [[*]{string}[*]] [${variable}]\n");
	printf("\tparam1 is a comma-seperated list of search terms\n");
	printf("\tparam2 is an optional literal file name search with optional wildcard prepend and append\n");
	printf("\tparam3 is an optional variable to save the results into; for use with other functions\n");
	printf("\te.g. >search brap,jiggawot *.txt\n");
	printf("\t\twould find any .txt file with a tag of brap and jiggawot\n");
	printf("\te.g. >search (brap|jiggawot),hello *.c\n");
	printf("\t\twould find any .c file with a tag of hello and one of either brap or jiggawot\n");
	printf("\te.g. >search brap *.c $brapc\n");
	printf("\t\t>describe $brapc\n");
	printf("\t\t\twould output 'search | 'brap *.c' | 4 results\n");
	printf("\t\t>describe $brapc -full\n");
	printf("\t\t\twould output the same as just doing the search\n");
}*/

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