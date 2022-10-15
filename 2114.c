#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int count = 0;
	int max = 0;
	int winner = 0;

	char **sentence = (char **) malloc(sizeof(char*) * 2);
	*(sentence) = "Hello world will be the newest longest sentence";
	*(sentence+1) = "This is a test it is the true longest sentence";

	for (int i = 0; i < 2; i++) {
		count = 1;
		for (int j = 0; j < strlen(*(sentence+i)); j++) {
			if (*(*(sentence+i)+j) == ' ') {
				count++;
			}
		}
		if (count > max) {
			max = count;
			winner = i;
		}
		count = 0;
	}
	printf("%d\n", max);
	printf("%s\n", sentence[winner]);
	return 0;
}
